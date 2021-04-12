/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class geo_isolater, NSProgress, NSString;

@interface GEOReportedProgress : NSObject {

	geo_isolater* _isolater;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	/*^block*/id _cancellationHandler;

}

@property (copy) NSString * kind; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) id cancellationHandler; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSProgress * progress;                //@synthesize progress=_progress - In the implementation block
+(id)progressWithTotalUnitCount:(long long)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setTotalUnitCount:(long long)arg1 ;
-(NSProgress *)progress;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)kind;
-(void)setCancellationHandler:(id)arg1 ;
-(long long)completedUnitCount;
-(id)cancellationHandler;
-(void)setKind:(NSString *)arg1 ;
-(id)initWithTotalUnitCount:(long long)arg1 ;
@end

