/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPSize;

@interface LPVideoPlayButtonStyle : NSObject {

	LPSize* _size;
	LPSize* _backgroundSize;
	double _disabledOpacity;

}

@property (nonatomic,retain) LPSize * size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPSize * backgroundSize;              //@synthesize backgroundSize=_backgroundSize - In the implementation block
@property (assign,nonatomic) double disabledOpacity;               //@synthesize disabledOpacity=_disabledOpacity - In the implementation block
-(id)initWithPlatform:(long long)arg1 ;
-(LPSize *)size;
-(void)setSize:(LPSize *)arg1 ;
-(double)disabledOpacity;
-(void)setBackgroundSize:(LPSize *)arg1 ;
-(void)setDisabledOpacity:(double)arg1 ;
-(LPSize *)backgroundSize;
@end

