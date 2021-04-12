/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject {

	NSObject*<OS_dispatch_queue> _rentalTrackerQueue;
	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(id)_init;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_saveRentals;
@end

