/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <AssetsLibraryServices/PLXPCObject.h>
#import <libobjc.A.dylib/PHPerformChangesRequest.h>

@protocol PHPerformChangesRequest <NSObject>
@required
-(void)recordDeleteRequest:(id)arg1;
-(void)recordInsertRequest:(id)arg1;
-(void)recordUpdateRequest:(id)arg1;

@end

#import <libobjc.A.dylib/PLPerformChangesRequestService.h>
#import <libobjc.A.dylib/PLPerformChangesRequest.h>

@protocol PLPerformChangesRequestService;
@class PHPerformChangesInstrumentation, NSMutableOrderedSet, NSMutableDictionary, NSOrderedSet, NSArray, NSString;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest> {

	PHPerformChangesInstrumentation* _instrumentation;
	NSMutableOrderedSet* _inserts;
	NSMutableOrderedSet* _updates;
	NSMutableOrderedSet* _deletes;
	BOOL _inService;
	id<PLPerformChangesRequestService> _service;
	NSMutableOrderedSet* _failedOnDemandRequests;
	NSMutableDictionary* _changeRequestsByUUID;

}

@property (nonatomic,readonly) BOOL hasChangeRequests; 
@property (nonatomic,retain) PHPerformChangesInstrumentation * instrumentation;                      //@synthesize instrumentation=_instrumentation - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * inserts;                                               //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updates;                                               //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deletes;                                               //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * requestSets; 
@property (nonatomic,readonly) long long accessScopeOptionsRequiredForRequestedChanges; 
@property (nonatomic,readonly) long long accessLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(xpc_type_sRef)type;
-(NSOrderedSet *)updates;
-(id)libraryServicesManager;
-(id)persistentStoreCoordinator;
-(NSOrderedSet *)inserts;
-(void)executeWithService:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setChangeRequest:(id)arg1 forUUID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)accessLevel;
-(NSArray *)requestSets;
-(id)changeRequestForUUID:(id)arg1 ;
-(id)clientDescription;
-(void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)arg1 error:(id)arg2 ;
-(NSString *)description;
-(void)recordFailedOnDemandRequest:(id)arg1 ;
-(long long)determineAuthorizationStatusForChanges;
-(long long)accessScopeOptionsRequiredForRequestedChanges;
-(BOOL)hasChangeRequests;
-(void)recordDeleteRequest:(id)arg1 ;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2 ;
-(NSOrderedSet *)deletes;
-(void)setInstrumentation:(PHPerformChangesInstrumentation *)arg1 ;
-(id)errorWithLocalizedDescription:(id)arg1 ;
-(void)recordInsertRequest:(id)arg1 ;
-(void)discardUnsupportedLimitedLibraryChangeRequests;
-(BOOL)_isSupportedLimitedLibraryChangeRequest:(id)arg1 ;
-(PHPerformChangesInstrumentation *)instrumentation;
-(void)recordUpdateRequest:(id)arg1 ;
@end

