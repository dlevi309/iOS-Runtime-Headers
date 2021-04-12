/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(LPSize *)size;
-(void)setSize:(LPSize *)arg1 ;
-(LPSize *)backgroundSize;
-(double)disabledOpacity;
-(void)setBackgroundSize:(LPSize *)arg1 ;
-(void)setDisabledOpacity:(double)arg1 ;
@end

