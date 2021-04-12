/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)consumeCodeWithGuid:(id)arg1 ;
-(void)setValidCodes:(NSArray *)arg1 ;
-(void)setOtcUtilities:(IMOneTimeCodeUtilities *)arg1 ;
-(void)setBroadcasterOverride:(id<IMDaemonListenerProtocol>)arg1 ;
-(id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2 ;
-(NSTimer *)codeInvalidationTimer;
-(void)setCodeInvalidationTimer:(NSTimer *)arg1 ;
-(void)setBroadcaster:(id<IMDaemonListenerProtocol>)arg1 ;
-(IMOneTimeCodeUtilities *)otcUtilities;
-(void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1 ;
-(void)broadcastCodeStatusToClients;
-(id<IMDaemonListenerProtocol>)broadcaster;
-(NSArray *)validCodes;
-(id<IMDaemonListenerProtocol>)broadcasterOverride;
-(void)startTrackingCode:(id)arg1 ;
@end

