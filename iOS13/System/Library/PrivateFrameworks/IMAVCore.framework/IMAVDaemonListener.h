/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {

	NSMutableArray* _handlers;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;

}

@property (nonatomic,readonly) BOOL isSetupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_noteDisconnected;
-(BOOL)isSetupComplete;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
@end

