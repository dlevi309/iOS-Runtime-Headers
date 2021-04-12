/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, _MRDeviceInfoMessageProtobuf, NSError;

@interface MRExternalDeviceTransport : NSObject {

	long long _connectionType;
	BOOL _requiresCustomPairing;
	NSString* _uid;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,readonly) NSString * uid;                                         //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL requiresCustomPairing;                             //@synthesize requiresCustomPairing=_requiresCustomPairing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSystemAuthenticationPrompt; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) long long connectionType;                               //@synthesize connectionType=_connectionType - In the implementation block
-(NSString *)name;
-(long long)port;
-(NSError *)error;
-(void)reset;
-(NSString *)uid;
-(long long)connectionType;
-(NSString *)hostname;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
@end

