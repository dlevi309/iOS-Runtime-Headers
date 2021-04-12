/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <libobjc.A.dylib/BacklightSystemDelegateXpcProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, BrightnessSystemClientInternal, NSString;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {

	/*^block*/id clientBlock;
	NSObject*<OS_dispatch_queue> queue;
	BrightnessSystemClientInternal* _target;

}

@property (assign,nonatomic) BrightnessSystemClientInternal * target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTarget:(BrightnessSystemClientInternal *)arg1 ;
-(BrightnessSystemClientInternal *)target;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)notifyChangedProperty:(id)arg1 value:(id)arg2 ;
-(void)unregisterNotificationBlock;
@end

