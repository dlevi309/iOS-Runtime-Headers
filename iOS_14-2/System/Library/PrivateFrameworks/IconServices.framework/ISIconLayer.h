/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/ISIconManagerObserver.h>

@class ISIcon;

@interface ISIconLayer : CALayer <ISIconManagerObserver> {

	ISIcon* _icon;
	unsigned long long _variantOptions;
	unsigned long long _badgeOptions;
	unsigned long long _backgroundStyle;
	unsigned long long _shape;
	BOOL _shouldApplyMask;
	BOOL _drawBorder;
	unsigned long long _iconShape;

}

@property (nonatomic,retain) ISIcon * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long variantOptions;               //@synthesize variantOptions=_variantOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                 //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconShape;                    //@synthesize iconShape=_iconShape - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyMask;                            //@synthesize shouldApplyMask=_shouldApplyMask - In the implementation block
@property (assign,nonatomic) BOOL drawBorder;                                 //@synthesize drawBorder=_drawBorder - In the implementation block
-(id)init;
-(unsigned long long)backgroundStyle;
-(ISIcon *)icon;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(void)setIcon:(ISIcon *)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2 ;
-(BOOL)drawBorder;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)iconShape;
-(void)setIconShape:(unsigned long long)arg1 ;
-(BOOL)shouldApplyMask;
-(unsigned long long)variantOptions;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(unsigned long long)badgeOptions;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(void)setDrawBorder:(BOOL)arg1 ;
@end

