/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol SUInstallationConstraintMonitor
@property (assign,nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long representedConstraints; 
@property (nonatomic,readonly) unsigned long long unsatisfiedConstraints; 
@required
-(id<SUInstallationConstraintMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isSatisfied;
-(unsigned long long)representedConstraints;
-(unsigned long long)unsatisfiedConstraints;

@end

