/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL useANODModelForAXElementVision; 
+(id)settings;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)removeObserverForAllSettings:(id)arg1 ;
-(BOOL)writeOutInputImages;
-(void)setWriteOutInputImages:(BOOL)arg1 ;
-(BOOL)writeOutOCRInputImages;
-(void)setWriteOutOCRInputImages:(BOOL)arg1 ;
-(BOOL)writeOutScreenCaptures;
-(void)setWriteOutScreenCaptures:(BOOL)arg1 ;
-(BOOL)useANODModelForAXElementVision;
-(void)setUseANODModelForAXElementVision:(BOOL)arg1 ;
-(id)_init;
@end

