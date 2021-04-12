/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOActiveTileGroupMigrationTaskOptions;


@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction; 
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options; 
@optional
-(id)stateWithHints:(os_state_hints_s*)arg1;

@required
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(void)setOptions:(id)arg1;
-(id<NSObject>)transaction;
-(void)setTransaction:(id)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)populateTileGroup:(id)arg1;
-(void)removeOldData:(id)arg1;
-(long long)estimatedWeight;

@end

