/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class WDCancellationToken;

@interface WDBrandLogoView : UIImageView {

	BOOL _isFallback;
	double _size;
	WDCancellationToken* _cancellationToken;

}

@property (nonatomic,retain) WDCancellationToken * cancellationToken;              //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (assign,nonatomic) BOOL isFallback;                                      //@synthesize isFallback=_isFallback - In the implementation block
@property (assign,nonatomic) double size;                                          //@synthesize size=_size - In the implementation block
-(double)size;
-(void)prepareForReuse;
-(void)setSize:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateStyle;
-(WDCancellationToken *)cancellationToken;
-(void)setCancellationToken:(WDCancellationToken *)arg1 ;
-(void)fetchBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)setIsFallback:(BOOL)arg1 ;
-(BOOL)isFallback;
@end

