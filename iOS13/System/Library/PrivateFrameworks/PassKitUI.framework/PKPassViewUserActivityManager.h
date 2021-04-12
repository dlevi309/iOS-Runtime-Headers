/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)startedViewingPass:(id)arg1 ;
-(void)endedViewingPass;
-(id)_currentUserActivityPassUniqueID;
-(void)_endedViewingPass;
-(BOOL)_shouldDonateActivity:(id)arg1 ;
-(id)_displayNameForPass:(id)arg1 ;
-(id)_templateNameForPass:(id)arg1 ;
-(id)_searchableItemAttributeSetForPass:(id)arg1 ;
@end

