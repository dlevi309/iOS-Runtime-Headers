/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)remoteDevice;
+(id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)encodedClassName;
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
@end

