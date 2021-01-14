/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableArray, MKVKImageSourceCalculationParameters, NSMutableSet, NSArray;

@interface MKVKImageSourceKeyImageResult : NSObject {

	NSMutableArray* _mutableFullBleedColors;
	BOOL _sameFullBleedColors;
	MKVKImageSourceCalculationParameters* _parameters;
	NSMutableArray* _triedKeys;
	NSMutableArray* _mutableImages;
	NSMutableSet* _imageDatas;

}

@property (nonatomic,retain) NSMutableArray * triedKeys;                                            //@synthesize triedKeys=_triedKeys - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableImages;                                        //@synthesize mutableImages=_mutableImages - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageDatas;                                             //@synthesize imageDatas=_imageDatas - In the implementation block
@property (nonatomic,readonly) MKVKImageSourceCalculationParameters * parameters;                   //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSArray * fullBleedColors; 
@property (getter=hasSameFullBleedColors,nonatomic,readonly) BOOL sameFullBleedColors;              //@synthesize sameFullBleedColors=_sameFullBleedColors - In the implementation block
@property (nonatomic,readonly) NSArray * images; 
-(MKVKImageSourceCalculationParameters *)parameters;
-(NSMutableSet *)imageDatas;
-(void)addFullBleedColor:(id)arg1 ;
-(void)setTriedKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableImages;
-(void)setMutableImages:(NSMutableArray *)arg1 ;
-(void)setImageDatas:(NSMutableSet *)arg1 ;
-(NSArray *)images;
-(id)initWithParameters:(id)arg1 ;
-(NSArray *)fullBleedColors;
-(BOOL)hasSameFullBleedColors;
-(NSMutableArray *)triedKeys;
@end

