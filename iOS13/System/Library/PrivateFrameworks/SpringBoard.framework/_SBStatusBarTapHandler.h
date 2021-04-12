/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject {

	NSURL* _url;
	/*^block*/id _block;
	_SBStatusBarTapApplicationDestination* _appDestination;
	_SBStatusBarTapApplicationDestination* _applicationDestination;

}

@property (nonatomic,copy,readonly) _SBStatusBarTapApplicationDestination * applicationDestination;              //@synthesize applicationDestination=_applicationDestination - In the implementation block
@property (nonatomic,readonly) BOOL canRequestUnlock; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)handleTap;
-(_SBStatusBarTapApplicationDestination *)applicationDestination;
-(BOOL)canRequestUnlock;
-(id)initWithApplicationDestination:(id)arg1 ;
@end

