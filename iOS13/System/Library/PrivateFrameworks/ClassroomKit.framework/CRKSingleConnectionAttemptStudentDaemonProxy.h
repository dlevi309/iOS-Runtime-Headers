/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@protocol CRKTransportProviding;
@class CATTaskClient, NSError, NSString;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {

	id<CRKTransportProviding> mTransportProvider;
	CATTaskClient* mTaskClient;
	NSError* mError;
	BOOL mDidAttemptToConnect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)connect;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id)initWithTransportProvider:(id)arg1 ;
-(id)operationForRequest:(id)arg1 ;
-(void)connectIfNeeded;
@end

