/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * attributionId; 
@property (nonatomic,copy) NSArray * urls; 
@property (assign,nonatomic) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attribution;
+(id)attributionWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)groupIdentifier;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)attributionId;
-(void)setAttributionId:(NSString *)arg1 ;
@end

