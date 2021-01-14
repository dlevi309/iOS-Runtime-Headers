/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	FBSOrientationObserver* mObserver;
	NSMutableArray* mCompletionBlocks;
	BOOL mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(id)init;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientation;
-(void)dealloc;
-(/*^block*/id)makeUpdateHandler;
-(void)updateInterfaceOrientationWithNotification:(id)arg1 ;
-(void)updateInterfaceOrientationWithBSOrientation:(long long)arg1 ;
-(unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end

