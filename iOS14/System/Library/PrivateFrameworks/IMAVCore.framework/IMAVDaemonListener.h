/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {

	NSMutableArray* _handlers;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;

}

@property (nonatomic,readonly) BOOL isSetupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
-(BOOL)isSetupComplete;
-(id)init;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)_noteDisconnected;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

