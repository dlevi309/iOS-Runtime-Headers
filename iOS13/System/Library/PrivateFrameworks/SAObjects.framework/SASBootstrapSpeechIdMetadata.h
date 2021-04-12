/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)bootstrapSpeechId;
-(void)setBootstrapSpeechId:(NSString *)arg1 ;
-(NSDate *)keychainCreationDate;
-(void)setKeychainCreationDate:(NSDate *)arg1 ;
@end

