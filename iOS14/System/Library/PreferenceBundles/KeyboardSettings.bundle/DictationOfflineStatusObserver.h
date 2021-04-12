/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/


@protocol DictationOfflineStatusObserverDelegate;
@interface DictationOfflineStatusObserver : NSObject {

	id<DictationOfflineStatusObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DictationOfflineStatusObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DictationOfflineStatusObserverDelegate>)delegate;
-(void)setDelegate:(id<DictationOfflineStatusObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)updateOfflineDictationStatus;
@end

