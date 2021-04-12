/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class ATXHeuristicDevice, _PASLock, NSString;

@interface ATXBestContactHandleForServiceDataSource : NSObject <IDSIDQueryControllerDelegate> {

	ATXHeuristicDevice* _device;
	_PASLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_getBestGuessFromRankedHandle:(id)arg1 forService:(id)arg2 ;
@end

