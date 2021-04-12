/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKRequestPerformingProtocol;
@class NSDictionary, CATRemoteTaskOperation;

@interface CRKFetchClassroomConfigurationOperation : CATOperation {

	id<CRKRequestPerformingProtocol> mStudentDaemonProxy;
	NSDictionary* mSourcesByType;
	CATRemoteTaskOperation* mFetchConfigurationOperation;

}
+(id)defaultSourcesByType;
-(id)init;
-(void)run;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 sourcesByType:(id)arg2 ;
-(void)fetchConfigurationiOS;
-(void)fetchConfigurationOperationDidFinish:(id)arg1 ;
-(void)fetchConfigurationMacOS;
@end

