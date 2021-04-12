/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_source, TUIDSLookup, TCSIDSIDStatusControllerDelegate;
@class NSObject, IDSBatchIDQueryController, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface TCSIDSIDStatusController : NSObject <IDSBatchIDQueryControllerDelegate> {

	NSObject*<OS_dispatch_source> _timer;
	double _timeout;
	id<TUIDSLookup> _item;
	id<TCSIDSIDStatusControllerDelegate> _delegate;
	IDSBatchIDQueryController* _queryController;
	NSArray* _destinations;
	NSMutableDictionary* _destinationToStatus;

}

@property (nonatomic,retain) IDSBatchIDQueryController * queryController;                         //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,readonly) NSArray * destinations;                                            //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationToStatus;                         //@synthesize destinationToStatus=_destinationToStatus - In the implementation block
@property (nonatomic,readonly) id<TUIDSLookup> item;                                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * tinCanHandle; 
@property (nonatomic,__weak,readonly) id<TCSIDSIDStatusControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForDestinationToStatus:(id)arg1 ;
-(void)execute;
-(void)setQueryController:(IDSBatchIDQueryController *)arg1 ;
-(NSArray *)destinations;
-(id<TCSIDSIDStatusControllerDelegate>)delegate;
-(id<TUIDSLookup>)item;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(IDSBatchIDQueryController *)queryController;
-(NSNumber *)status;
-(void)dealloc;
-(void)_statusQueryTimedOut;
-(NSMutableDictionary *)destinationToStatus;
-(id)initWithItem:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 ;
-(NSString *)tinCanHandle;
@end

