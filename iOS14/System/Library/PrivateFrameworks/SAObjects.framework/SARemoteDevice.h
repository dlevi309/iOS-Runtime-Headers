/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SARemoteDevice : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * brandName; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * personalDomainsAuthenticationMode; 
@property (nonatomic,copy) NSNumber * personalDomainsEnabled; 
@property (assign,nonatomic) BOOL siriEnabled; 
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)remoteDevice;
-(NSString *)deviceName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(NSString *)personalDomainsAuthenticationMode;
-(void)setPersonalDomainsAuthenticationMode:(NSString *)arg1 ;
-(NSNumber *)personalDomainsEnabled;
-(void)setPersonalDomainsEnabled:(NSNumber *)arg1 ;
-(BOOL)siriEnabled;
-(void)setSiriEnabled:(BOOL)arg1 ;
-(NSString *)userAgent;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)language;
@end

