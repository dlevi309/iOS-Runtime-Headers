/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLCloudChangeTracker <NSObject>
@property (copy,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<PLCloudChangeTrackerDelegate> delegate; 
@property (copy,readonly) NSString * lastKnownTokenDescription; 
@property (readonly) BOOL hasChangeTrackerToken; 
@property (copy,readonly) NSString * lastKnownDeletionTokenDescription; 
@required
-(NSString *)name;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)disconnect;
-(BOOL)connect;
-(BOOL)isConnected;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1;
-(id)fetchAllEvents;
-(void)clearToken;
-(BOOL)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1;
-(NSString *)lastKnownDeletionTokenDescription;

@end

