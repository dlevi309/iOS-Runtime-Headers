/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithParameters:(id)arg1 ;
-(MKVKImageSourceCalculationParameters *)parameters;
-(NSArray *)images;
-(NSArray *)fullBleedColors;
-(BOOL)hasSameFullBleedColors;
-(void)addFullBleedColor:(id)arg1 ;
-(NSMutableArray *)triedKeys;
-(void)setTriedKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableImages;
-(void)setMutableImages:(NSMutableArray *)arg1 ;
-(NSMutableSet *)imageDatas;
-(void)setImageDatas:(NSMutableSet *)arg1 ;
@end

