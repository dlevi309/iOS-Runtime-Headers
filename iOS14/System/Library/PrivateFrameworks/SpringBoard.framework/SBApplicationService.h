/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationServerMiscDelegate.h>

@class SBApplicationController, NSString;

@interface SBApplicationService : NSObject <SBApplicationServerMiscDelegate> {

	SBApplicationController* _applicationController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_initWithApplicationController:(id)arg1 ;
-(void)applicationServer:(id)arg1 client:(id)arg2 deleteSnapshotsForApplicationIdentifier:(id)arg3 ;
@end

