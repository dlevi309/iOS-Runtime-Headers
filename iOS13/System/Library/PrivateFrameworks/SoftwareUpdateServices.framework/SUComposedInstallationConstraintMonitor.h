/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUInstallationConstraintMonitorDelegate.h>
#import <libobjc.A.dylib/SUInstallationConstraintMonitor.h>

@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;
@class NSObject, NSSet, NSString;

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _queue_installationConstraintMonitors;
	id<SUInstallationConstraintMonitorDelegate> _queue_delegate;
	unsigned long long _queue_representedConstraints;

}

@property (nonatomic,retain,readonly) NSSet * constraintMonitors;                               //@synthesize queue_installationConstraintMonitors=_queue_installationConstraintMonitors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long representedConstraints; 
@property (nonatomic,readonly) unsigned long long unsatisfiedConstraints; 
-(void)dealloc;
-(id<SUInstallationConstraintMonitorDelegate>)delegate;
-(void)setDelegate:(id<SUInstallationConstraintMonitorDelegate>)arg1 ;
-(id)_queue_delegate;
-(BOOL)isSatisfied;
-(unsigned long long)representedConstraints;
-(void)_queue_setDelegate:(id)arg1 ;
-(unsigned long long)_queue_unsatisfiedConstraints;
-(unsigned long long)unsatisfiedConstraints;
-(void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2 ;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2 ;
-(id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2 ;
-(void)_queue_clearDelegate;
-(unsigned long long)_queue_representedConstraints;
-(void)_queue_invalidateChildConstraintMonitors;
-(NSSet *)constraintMonitors;
@end

