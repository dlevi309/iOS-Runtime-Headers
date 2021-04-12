/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUInstallationConstraintMonitor.h>

@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;
@class NSObject, SUDownload;

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	SUDownload* _download;
	unsigned long long _representedConstraints;
	id<SUInstallationConstraintMonitorDelegate> _queue_delegate;

}

@property (nonatomic,retain,readonly) SUDownload * download; 
@property (assign,nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long representedConstraints; 
@property (nonatomic,readonly) unsigned long long unsatisfiedConstraints; 
-(void)dealloc;
-(id<SUInstallationConstraintMonitorDelegate>)delegate;
-(void)setDelegate:(id<SUInstallationConstraintMonitorDelegate>)arg1 ;
-(SUDownload *)download;
-(BOOL)isSatisfied;
-(unsigned long long)representedConstraints;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3 ;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
@end

