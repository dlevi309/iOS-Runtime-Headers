/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLTrackableRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface PLTrackableRequestManager : NSObject <PLTrackableRequestDelegate> {

	os_unfair_lock_s _requestsLock;
	NSMutableDictionary* _requestsByIdentifier;
	BOOL _invalid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)trackableRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)trackableResourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)trackableDownloadRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)trackableVideoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)registerRequest:(id)arg1 ;
-(void)_unregisterRequestForTaskIdentifier:(id)arg1 ;
-(void)_unregisterRequest:(id)arg1 ;
-(id)requestWithTaskIdentifier:(id)arg1 ;
-(void)_availabilityRequestDidFinish:(id)arg1 ;
@end

