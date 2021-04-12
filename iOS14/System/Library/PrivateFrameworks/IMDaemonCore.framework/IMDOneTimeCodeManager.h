/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDaemonListenerProtocol;
@class NSArray, NSTimer, IMOneTimeCodeUtilities;

@interface IMDOneTimeCodeManager : NSObject {

	NSArray* _validCodes;
	NSTimer* _codeInvalidationTimer;
	id<IMDaemonListenerProtocol> _broadcaster;
	id<IMDaemonListenerProtocol> _broadcasterOverride;
	IMOneTimeCodeUtilities* _otcUtilities;

}

@property (nonatomic,retain) NSArray * validCodes;                                          //@synthesize validCodes=_validCodes - In the implementation block
@property (nonatomic,retain) NSTimer * codeInvalidationTimer;                               //@synthesize codeInvalidationTimer=_codeInvalidationTimer - In the implementation block
@property (nonatomic,retain) id<IMDaemonListenerProtocol> broadcaster;                      //@synthesize broadcaster=_broadcaster - In the implementation block
@property (nonatomic,retain) id<IMDaemonListenerProtocol> broadcasterOverride;              //@synthesize broadcasterOverride=_broadcasterOverride - In the implementation block
@property (nonatomic,retain) IMOneTimeCodeUtilities * otcUtilities;                         //@synthesize otcUtilities=_otcUtilities - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSArray *)validCodes;
-(void)broadcastCodeStatusToClients;
-(void)setCodeInvalidationTimer:(NSTimer *)arg1 ;
-(IMOneTimeCodeUtilities *)otcUtilities;
-(id<IMDaemonListenerProtocol>)broadcaster;
-(void)setValidCodes:(NSArray *)arg1 ;
-(void)setBroadcaster:(id<IMDaemonListenerProtocol>)arg1 ;
-(void)consumeCodeWithGuid:(id)arg1 ;
-(id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2 ;
-(void)setBroadcasterOverride:(id<IMDaemonListenerProtocol>)arg1 ;
-(void)setOtcUtilities:(IMOneTimeCodeUtilities *)arg1 ;
-(NSTimer *)codeInvalidationTimer;
-(void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1 ;
-(id<IMDaemonListenerProtocol>)broadcasterOverride;
-(void)dealloc;
-(void)startTrackingCode:(id)arg1 ;
@end

