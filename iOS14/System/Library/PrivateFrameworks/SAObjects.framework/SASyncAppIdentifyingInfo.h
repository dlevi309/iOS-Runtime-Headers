/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * buildNumber; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifyingInfo;
+(id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)version;
@end

