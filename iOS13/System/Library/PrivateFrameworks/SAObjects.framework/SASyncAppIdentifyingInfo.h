/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(id)encodedClassName;
@end

