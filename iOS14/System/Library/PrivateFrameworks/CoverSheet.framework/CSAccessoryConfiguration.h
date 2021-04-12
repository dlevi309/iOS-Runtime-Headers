/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/CSPersistentContentLayoutProviding.h>
#import <libobjc.A.dylib/CSDateTimeLayoutAggregating.h>

@class CSLayoutStrategy;

@interface CSAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating> {

	BOOL _showBolt;
	BOOL _staticViewNeeded;
	double _boltPointSize;
	double _ringDiameter;
	double _splashRingDiameter;
	double _lineWidth;
	double _chargePercentFont;
	double _splashRingDiameterSizeXFactor;
	double _splashRingDiameterSizeXXFactor;
	double _splashRingDiameterSizeXXXFactor;
	double _walletBottomOffset;
	double _walletCornerRadius;
	double _staticViewRingDiameter;
	CSLayoutStrategy* _layoutStrategy;
	CGSize _boltSize;
	CGSize _walletSize;

}

@property (assign,nonatomic) CGSize boltSize;                                         //@synthesize boltSize=_boltSize - In the implementation block
@property (assign,nonatomic) double ringDiameter;                                     //@synthesize ringDiameter=_ringDiameter - In the implementation block
@property (assign,nonatomic) double splashRingDiameter;                               //@synthesize splashRingDiameter=_splashRingDiameter - In the implementation block
@property (assign,nonatomic) double lineWidth;                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double chargePercentFont;                                //@synthesize chargePercentFont=_chargePercentFont - In the implementation block
@property (assign,nonatomic) double splashRingDiameterSizeXFactor;                    //@synthesize splashRingDiameterSizeXFactor=_splashRingDiameterSizeXFactor - In the implementation block
@property (assign,nonatomic) double splashRingDiameterSizeXXFactor;                   //@synthesize splashRingDiameterSizeXXFactor=_splashRingDiameterSizeXXFactor - In the implementation block
@property (assign,nonatomic) BOOL staticViewNeeded;                                   //@synthesize staticViewNeeded=_staticViewNeeded - In the implementation block
@property (assign,nonatomic) double staticViewRingDiameter;                           //@synthesize staticViewRingDiameter=_staticViewRingDiameter - In the implementation block
@property (assign,nonatomic) double splashRingDiameterSizeXXXFactor;                  //@synthesize splashRingDiameterSizeXXXFactor=_splashRingDiameterSizeXXXFactor - In the implementation block
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                       //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,readonly) BOOL showBolt;                                         //@synthesize showBolt=_showBolt - In the implementation block
@property (nonatomic,readonly) double boltPointSize;                                  //@synthesize boltPointSize=_boltPointSize - In the implementation block
@property (nonatomic,readonly) CGSize walletSize;                                     //@synthesize walletSize=_walletSize - In the implementation block
@property (nonatomic,readonly) double walletBottomOffset;                             //@synthesize walletBottomOffset=_walletBottomOffset - In the implementation block
@property (nonatomic,readonly) double walletCornerRadius;                             //@synthesize walletCornerRadius=_walletCornerRadius - In the implementation block
@property (nonatomic,readonly) CGRect visibleScreenCoordinatesForSleeve; 
+(id)defaultConfiguration;
+(id)staticViewConfiguration;
-(double)listMinY;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(double)bottomContentInset;
-(double)dateTimeMostExtremeLeadingX;
-(double)timeToSubtitleLabelBaselineDifferenceY;
-(CSLayoutStrategy *)layoutStrategy;
-(double)timeLabelBaselineY;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(double)dateTimeSubtitleMaximumWidth;
-(BOOL)containsCenteredDateTimeLayout;
-(BOOL)showBolt;
-(double)timeLabelOffsetForScrollPercent:(double)arg1 ;
-(double)windowedAccessoryInset;
-(double)dateTimeMostExtremeTrailingX;
-(double)dateBaselineToListY;
-(double)ringDiameter;
-(double)walletCornerRadius;
-(double)walletBottomOffset;
-(CGSize)walletSize;
-(double)splashRingDiameter;
-(double)splashRingDiameterSizeXFactor;
-(double)splashRingDiameterSizeXXXFactor;
-(BOOL)staticViewNeeded;
-(double)splashRingDiameterSizeXXFactor;
-(double)boltPointSize;
-(CGSize)boltSize;
-(double)chargePercentFont;
-(CGRect)visibleScreenCoordinatesForSleeve;
-(id)initWithStaticViewNeeded:(BOOL)arg1 ;
-(void)setValuesWithStaticViewNeeded:(BOOL)arg1 ;
-(void)setBoltSize:(CGSize)arg1 ;
-(void)setRingDiameter:(double)arg1 ;
-(void)setSplashRingDiameter:(double)arg1 ;
-(void)setChargePercentFont:(double)arg1 ;
-(void)setSplashRingDiameterSizeXFactor:(double)arg1 ;
-(void)setSplashRingDiameterSizeXXFactor:(double)arg1 ;
-(void)setSplashRingDiameterSizeXXXFactor:(double)arg1 ;
-(void)setStaticViewNeeded:(BOOL)arg1 ;
-(double)staticViewRingDiameter;
-(void)setStaticViewRingDiameter:(double)arg1 ;
@end

