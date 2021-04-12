/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * classId; 
@property (nonatomic,copy) NSString * groupId; 
@property (nonatomic,copy) NSArray * supportedProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)supportedProperties;
-(NSString *)aceVersion;
-(void)setAceVersion:(NSString *)arg1 ;
-(NSString *)classId;
-(void)setClassId:(NSString *)arg1 ;
-(void)setSupportedProperties:(NSArray *)arg1 ;
@end

