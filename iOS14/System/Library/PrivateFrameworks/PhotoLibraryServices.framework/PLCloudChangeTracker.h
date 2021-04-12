/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isConnected;
-(void)disconnect;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(BOOL)connect;
-(NSString *)name;
-(void)setDelegate:(id)arg1;
-(void)clearToken;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1;
-(id)fetchAllEvents;
-(BOOL)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1;
-(NSString *)lastKnownDeletionTokenDescription;

@end

