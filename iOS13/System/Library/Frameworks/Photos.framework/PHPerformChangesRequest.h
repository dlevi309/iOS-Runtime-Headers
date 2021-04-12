/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <AssetsLibraryServices/PLXPCObject.h>
#import <libobjc.A.dylib/PHPerformChangesRequest.h>

@protocol PHPerformChangesRequest <NSObject>
@required
-(void)recordInsertRequest:(id)arg1;
-(void)recordUpdateRequest:(id)arg1;
-(void)recordDeleteRequest:(id)arg1;

@end

#import <libobjc.A.dylib/PHPerformChangesRequestService.h>

@protocol PHPerformChangesRequestService;
@class NSMutableOrderedSet, NSMutableArray, NSOrderedSet, NSArray, NSString;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PHPerformChangesRequestService> {

	BOOL _inService;
	id<PHPerformChangesRequestService> _service;
	NSMutableOrderedSet* _inserts;
	NSMutableOrderedSet* _updates;
	NSMutableOrderedSet* _deletes;
	NSMutableOrderedSet* _failedOnDemandRequests;
	NSMutableArray* _saveTokens;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSOrderedSet * inserts;                //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updates;                //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deletes;                //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * saveTokens;                  //@synthesize saveTokens=_saveTokens - In the implementation block
@property (nonatomic,readonly) NSArray * requestSets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(xpc_type_sRef)type;
-(NSString *)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(NSOrderedSet *)updates;
-(NSOrderedSet *)inserts;
-(void)recordInsertRequest:(id)arg1 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)uuidForSaveToken:(id)arg1 ;
-(NSArray *)requestSets;
-(void)recordSaveToken:(id)arg1 ;
-(void)recordFailedOnDemandRequest:(id)arg1 ;
-(void)notifyChangesTransactionFailedWithLibrary:(id)arg1 error:(id)arg2 ;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2 ;
-(NSOrderedSet *)deletes;
-(NSArray *)saveTokens;
@end

