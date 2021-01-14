/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject {

	PCSIdentitySetDataRef _set;
	NSOperationQueue* _queue;
	NSString* _dsid;

}

@property (assign) PCSIdentitySetDataRef set;              //@synthesize set=_set - In the implementation block
@property (retain) NSOperationQueue * queue;               //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * dsid;                        //@synthesize dsid=_dsid - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setSet:(PCSIdentitySetDataRef)arg1 ;
-(NSOperationQueue *)queue;
-(PCSIdentitySetDataRef)set;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(id)syncViewOperation:(id)arg1 ;
-(id)fetchCurrentOperation:(id)arg1 ;
-(id)ensurePCSFieldsOperation:(id)arg1 ;
-(id)createIdentityOperation:(id)arg1 ;
-(id)stripOperationErrorIfPCSError:(id)arg1 ;
-(void)createIdentity:(id)arg1 complete:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryWithSync:(id)arg1 ;
-(void)submitRequest:(id)arg1 complete:(/*^block*/id)arg2 ;
-(id)initWithIdentitySet:(PCSIdentitySetDataRef)arg1 dsid:(id)arg2 ;
-(void)createNewIdentity:(id)arg1 roll:(BOOL)arg2 sync:(BOOL)arg3 complete:(/*^block*/id)arg4 ;
@end

