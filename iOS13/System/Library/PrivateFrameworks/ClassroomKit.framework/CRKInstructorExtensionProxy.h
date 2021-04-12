/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, NSExtension, NSUUID, NSString;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* mWorkspace;
	NSExtension* mInstructorExtension;
	NSUUID* mContextIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedExtensionProxy;
-(id)init;
-(void)dealloc;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)fetchListenerEndpointFromClassroomBundleWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)beginExtensionRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)configureInstructorExtensionAfterFetchError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetExtension;
-(void)establishEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)proxiesContainClassroomApp:(id)arg1 ;
-(void)fetchListenerEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
@end

