/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)setTarget:(BrightnessSystemClientInternal *)arg1 ;
-(void)unregisterNotificationBlock;
-(void)notifyChangedProperty:(id)arg1 value:(id)arg2 ;
-(BrightnessSystemClientInternal *)target;
-(void)dealloc;
@end

