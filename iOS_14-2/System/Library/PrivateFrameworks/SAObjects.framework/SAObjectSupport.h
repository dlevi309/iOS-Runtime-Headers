/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSString *)groupId;
-(NSString *)classId;
-(void)setClassId:(NSString *)arg1 ;
-(void)setSupportedProperties:(NSArray *)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSArray *)supportedProperties;
-(NSString *)aceVersion;
-(void)setAceVersion:(NSString *)arg1 ;
@end

