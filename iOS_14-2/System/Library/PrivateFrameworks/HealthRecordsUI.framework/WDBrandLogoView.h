/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateStyle;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)size;
-(void)setSize:(double)arg1 ;
-(void)prepareForReuse;
-(void)fetchBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(WDCancellationToken *)cancellationToken;
-(void)setCancellationToken:(WDCancellationToken *)arg1 ;
-(BOOL)isFallback;
-(void)setIsFallback:(BOOL)arg1 ;
@end

