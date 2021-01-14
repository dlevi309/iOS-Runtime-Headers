/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface THThreadNetworkCredentials : NSObject <NSSecureCoding> {

	unsigned char _channel;
	NSData* _masterKey;
	NSString* _passPhrase;
	NSData* _PSKc;
	NSData* _PANID;
	NSString* _userInfo;

}

@property (nonatomic,copy) NSData * masterKey;                   //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,copy) NSString * passPhrase;                //@synthesize passPhrase=_passPhrase - In the implementation block
@property (nonatomic,copy) NSData * PSKc;                        //@synthesize PSKc=_PSKc - In the implementation block
@property (assign,nonatomic) unsigned char channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * PANID;                       //@synthesize PANID=_PANID - In the implementation block
@property (nonatomic,copy) NSString * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(NSString *)arg1 ;
-(NSData *)PSKc;
-(NSString *)userInfo;
-(id)init;
-(NSData *)PANID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannel:(unsigned char)arg1 ;
-(unsigned char)channel;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)masterKey;
-(NSString *)passPhrase;
-(id)initWithMasterKey:(id)arg1 passPhrase:(id)arg2 PSKc:(id)arg3 channel:(unsigned char)arg4 PANID:(id)arg5 userInfo:(id)arg6 ;
-(void)setMasterKey:(NSData *)arg1 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(void)setPSKc:(NSData *)arg1 ;
-(void)setPANID:(NSData *)arg1 ;
@end

