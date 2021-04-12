/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding> {

	NSString* _tokenIdentifier;
	NSString* _environment;
	NSData* _lastKnownDeviceToken;

}

@property (nonatomic,copy) NSString * tokenIdentifier;                 //@synthesize tokenIdentifier=_tokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environment;                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSData * lastKnownDeviceToken;              //@synthesize lastKnownDeviceToken=_lastKnownDeviceToken - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)tokenIdentifier;
-(NSData *)lastKnownDeviceToken;
-(void)setLastKnownDeviceToken:(NSData *)arg1 ;
-(void)setTokenIdentifier:(NSString *)arg1 ;
@end

