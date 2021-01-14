/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransaction:(id)arg1;
-(id<NSObject>)transaction;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)setOptions:(id)arg1;
-(long long)estimatedWeight;
-(void)removeOldData:(id)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)cancel;
-(void)populateTileGroup:(id)arg1;

@end

