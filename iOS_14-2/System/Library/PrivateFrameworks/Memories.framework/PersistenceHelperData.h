/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class MiroBlueprint, NSDate, NSDictionary;

@interface PersistenceHelperData : NSObject {

	long long _schema;
	MiroBlueprint* _blueprint;
	double _customDuration;
	long long _pickedItemCount;
	long long _durationRange;
	double _duration;
	long long _maxDurationRange;
	NSDate* _viewedDate;
	NSDictionary* _loadedFreezeRanges;
	NSDate* _lastSaveDate;

}

@property (assign,nonatomic) long long schema;                               //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) MiroBlueprint * blueprint;                      //@synthesize blueprint=_blueprint - In the implementation block
@property (assign,nonatomic) double customDuration;                          //@synthesize customDuration=_customDuration - In the implementation block
@property (assign,nonatomic) long long pickedItemCount;                      //@synthesize pickedItemCount=_pickedItemCount - In the implementation block
@property (assign,nonatomic) long long durationRange;                        //@synthesize durationRange=_durationRange - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long maxDurationRange;                     //@synthesize maxDurationRange=_maxDurationRange - In the implementation block
@property (nonatomic,retain) NSDate * viewedDate;                            //@synthesize viewedDate=_viewedDate - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedFreezeRanges;              //@synthesize loadedFreezeRanges=_loadedFreezeRanges - In the implementation block
@property (nonatomic,retain) NSDate * lastSaveDate;                          //@synthesize lastSaveDate=_lastSaveDate - In the implementation block
-(void)setSchema:(long long)arg1 ;
-(long long)schema;
-(void)setDuration:(double)arg1 ;
-(MiroBlueprint *)blueprint;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(double)duration;
-(long long)durationRange;
-(void)setDurationRange:(long long)arg1 ;
-(double)customDuration;
-(NSDate *)viewedDate;
-(void)setPickedItemCount:(long long)arg1 ;
-(long long)pickedItemCount;
-(NSDictionary *)loadedFreezeRanges;
-(void)setCustomDuration:(double)arg1 ;
-(long long)maxDurationRange;
-(void)setMaxDurationRange:(long long)arg1 ;
-(void)setViewedDate:(NSDate *)arg1 ;
-(void)setLoadedFreezeRanges:(NSDictionary *)arg1 ;
-(NSDate *)lastSaveDate;
-(void)setLastSaveDate:(NSDate *)arg1 ;
@end

