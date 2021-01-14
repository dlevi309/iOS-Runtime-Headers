/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/


@interface _NAUIAutoUpdatingFontObserver : NSObject {

	id _notificationObserver;
	id _target;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
+(BOOL)canObserveFontsForTarget:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id)target;
-(void)updateDyamicFontForCurrentContentSize;
-(void)dealloc;
@end

