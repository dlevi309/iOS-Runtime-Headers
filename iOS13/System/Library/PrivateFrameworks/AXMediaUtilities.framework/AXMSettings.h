/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSMutableDictionary;

@interface AXMSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _defaults;
	NSMutableDictionary* _queue_settingObservers;

}

@property (assign,nonatomic) BOOL writeOutInputImages; 
@property (assign,nonatomic) BOOL writeOutOCRInputImages; 
@property (assign,nonatomic) BOOL writeOutScreenCaptures; 
+(id)settings;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)writeOutScreenCaptures;
-(BOOL)writeOutInputImages;
-(void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)removeObserverForAllSettings:(id)arg1 ;
-(void)setWriteOutInputImages:(BOOL)arg1 ;
-(BOOL)writeOutOCRInputImages;
-(void)setWriteOutOCRInputImages:(BOOL)arg1 ;
-(void)setWriteOutScreenCaptures:(BOOL)arg1 ;
@end

