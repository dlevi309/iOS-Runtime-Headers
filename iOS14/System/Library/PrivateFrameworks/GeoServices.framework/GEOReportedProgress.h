/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resignCurrent;
-(long long)totalUnitCount;
-(NSProgress *)progress;
-(id)initWithTotalUnitCount:(long long)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(NSString *)kind;
-(void)setCancellationHandler:(id)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)cancellationHandler;
-(void)cancel;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
-(BOOL)isCancelled;
-(long long)completedUnitCount;
@end

