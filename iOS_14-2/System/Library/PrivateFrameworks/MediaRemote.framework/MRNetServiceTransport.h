/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {

	MRDeviceInfo* _deviceInfo;
	BOOL _requiresCustomPairing;
	NSNetService* _netService;

}

@property (nonatomic,retain) NSNetService * netService;               //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) BOOL requiresCustomPairing; 
+(id)createDeviceInfoFromTXTRecord:(id)arg1 ;
+(id)createDeviceInfoFromNetService:(id)arg1 ;
-(long long)port;
-(id)deviceInfo;
-(long long)connectionType;
-(NSNetService *)netService;
-(id)error;
-(id)initWithNetService:(id)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(void)updateDeviceInfoWithTXTRecord:(id)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(id)name;
-(void)setRequiresCustomPairing:(BOOL)arg1 ;
-(id)description;
-(id)hostname;
-(void)reset;
@end

