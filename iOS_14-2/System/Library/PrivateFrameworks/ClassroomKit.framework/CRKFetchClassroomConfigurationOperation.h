/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(id)init;
-(BOOL)isAsynchronous;
-(void)main;
-(void)cancel;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 sourcesByType:(id)arg2 ;
-(void)fetchConfigurationiOS;
-(void)fetchConfigurationOperationDidFinish:(id)arg1 ;
-(void)fetchConfigurationMacOS;
@end

