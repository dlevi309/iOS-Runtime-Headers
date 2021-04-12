/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/


@interface _NAUIAutoUpdatingFontObserver : NSObject {

	id _notificationObserver;
	id _target;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
+(BOOL)canObserveFontsForTarget:(id)arg1 ;
-(void)dealloc;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)updateDyamicFontForCurrentContentSize;
@end

