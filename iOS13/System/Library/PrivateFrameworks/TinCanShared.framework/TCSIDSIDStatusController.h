/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<TCSIDSIDStatusControllerDelegate>)delegate;
-(id<TUIDSLookup>)item;
-(NSNumber *)status;
-(void)execute;
-(NSArray *)destinations;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(IDSBatchIDQueryController *)queryController;
-(void)_statusQueryTimedOut;
-(NSMutableDictionary *)destinationToStatus;
-(id)initWithItem:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 ;
-(NSString *)tinCanHandle;
-(void)setQueryController:(IDSBatchIDQueryController *)arg1 ;
@end

