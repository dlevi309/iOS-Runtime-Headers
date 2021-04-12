/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)connect;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(id)operationForRequest:(id)arg1 ;
-(id)initWithTransportProvider:(id)arg1 ;
-(void)connectIfNeeded;
@end

