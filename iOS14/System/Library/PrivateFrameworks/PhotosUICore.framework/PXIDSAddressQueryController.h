/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSMutableArray, IDSBatchIDQueryController, NSString;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {

	NSMutableDictionary* _queryStateForAddress;
	NSMutableArray* _queries;
	IDSBatchIDQueryController* _idsBatchIDQueryController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(id)completionHandler;
-(void)performBatchQueryForAddresses:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)dealloc;
@end

