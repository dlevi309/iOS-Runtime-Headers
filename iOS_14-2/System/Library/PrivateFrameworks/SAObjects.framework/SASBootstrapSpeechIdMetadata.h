/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * bootstrapSpeechId; 
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSDate * keychainCreationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootstrapSpeechIdMetadata;
+(id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)deviceType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)bootstrapSpeechId;
-(void)setBootstrapSpeechId:(NSString *)arg1 ;
-(NSDate *)keychainCreationDate;
-(void)setKeychainCreationDate:(NSDate *)arg1 ;
@end

