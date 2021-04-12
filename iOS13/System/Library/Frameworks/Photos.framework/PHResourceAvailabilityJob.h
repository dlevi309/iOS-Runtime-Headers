/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSMutableArray, NSArray, NSMutableSet;

@interface PHResourceAvailabilityJob : PLDaemonJob {

	NSMutableArray* _requests;
	NSArray* _cancelledRequestIdentifiers;
	NSMutableSet* _unsentRequestIdentifiers;
	os_unfair_lock_s _lock;

}
-(void)run;
-(id)description;
-(void)addRequest:(id)arg1 ;
-(void)runDaemonSide;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(void)setClientConnection:(id)arg1 ;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)cancelAll;
@end

