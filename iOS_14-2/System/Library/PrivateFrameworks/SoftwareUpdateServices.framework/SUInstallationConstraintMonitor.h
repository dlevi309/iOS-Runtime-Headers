/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol SUInstallationConstraintMonitor
@property (assign,nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long representedConstraints; 
@property (nonatomic,readonly) unsigned long long unsatisfiedConstraints; 
@required
-(id<SUInstallationConstraintMonitorDelegate>)delegate;
-(BOOL)isSatisfied;
-(void)setDelegate:(id)arg1;
-(unsigned long long)representedConstraints;
-(unsigned long long)unsatisfiedConstraints;

@end

