/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol OS_dispatch_queue;
@class NSUserActivity, NSObject, NSString;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {

	NSUserActivity* _currentUserActivity;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isForegroundActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(id)init;
-(void)_endedViewingPass;
-(id)_currentUserActivityPassUniqueID;
-(BOOL)_shouldDonateActivity:(id)arg1 ;
-(id)_displayNameForPass:(id)arg1 ;
-(id)_templateNameForPass:(id)arg1 ;
-(void)startedViewingPass:(id)arg1 ;
-(void)endedViewingPass;
-(id)_init;
-(void)dealloc;
@end

