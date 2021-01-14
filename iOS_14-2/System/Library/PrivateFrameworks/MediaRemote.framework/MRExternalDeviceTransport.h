/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject {

	long long _connectionType;
	BOOL _requiresCustomPairing;
	NSString* _uid;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) NSString * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL requiresCustomPairing;                          //@synthesize requiresCustomPairing=_requiresCustomPairing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSystemAuthenticationPrompt; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) long long connectionType;                            //@synthesize connectionType=_connectionType - In the implementation block
-(long long)port;
-(NSString *)uid;
-(MRDeviceInfo *)deviceInfo;
-(long long)connectionType;
-(NSError *)error;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(NSString *)name;
-(NSString *)hostname;
-(void)reset;
@end

