/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FBApplicationTerminationAssertionServiceDelegate>)delegate;
-(void)setDelegate:(id<FBApplicationTerminationAssertionServiceDelegate>)arg1 ;
-(void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)_reasonForEfficacy:(unsigned long long)arg1 ;
-(unsigned long long)_efficacyForReason:(id)arg1 ;
-(void)_notifyDelegateOfRelinquishForBundleID:(id)arg1 ;
-(void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2 ;
-(id)terminationAssertionsForBundleID:(id)arg1 ;
-(id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2 ;
@end

