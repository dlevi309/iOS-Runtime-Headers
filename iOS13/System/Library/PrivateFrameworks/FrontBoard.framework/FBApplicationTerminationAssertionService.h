/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BKSTerminationAssertionObserver.h>

@protocol FBApplicationTerminationAssertionServiceDelegate;
@class NSString;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver> {

	id<FBApplicationTerminationAssertionServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBApplicationTerminationAssertionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<FBApplicationTerminationAssertionServiceDelegate>)delegate;
-(void)setDelegate:(id<FBApplicationTerminationAssertionServiceDelegate>)arg1 ;
-(void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_reasonForEfficacy:(unsigned long long)arg1 ;
-(unsigned long long)_efficacyForReason:(id)arg1 ;
-(void)_notifyDelegateOfRelinquishForBundleID:(id)arg1 ;
-(void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2 ;
-(id)terminationAssertionsForBundleID:(id)arg1 ;
-(id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2 ;
@end

