/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableArray, NSString, NSMapTable, NSMutableDictionary, NSNumberFormatter;

@interface _MKScaleUnitsView : UIView {

	BOOL _useLightText;
	double _segmentLengthInPixels;
	double _unitsWidth;
	double _justUnitsWidth;
	NSDictionary* _legendAttributes;
	NSMutableArray* _strings;
	NSString* _legendBaseString;
	NSString* _unitsString;
	NSString* _unpaddedUnitsString;
	NSMapTable* _legendStringWidthCache;
	NSMutableDictionary* _legendStringForDistanceStringCache;
	NSNumberFormatter* _floatNumberFormatter;
	NSString* _zeroUnitsString;
	BOOL _RTL;

}

@property (assign,getter=isRTL,nonatomic) BOOL RTL;                                 //@synthesize RTL=_RTL - In the implementation block
@property (assign,nonatomic) BOOL useLightText; 
@property (assign,nonatomic) double segmentLengthInPixels; 
@property (nonatomic,readonly) double unitsWidth;                                   //@synthesize unitsWidth=_unitsWidth - In the implementation block
@property (nonatomic,retain) NSString * legendBaseString;                           //@synthesize legendBaseString=_legendBaseString - In the implementation block
@property (nonatomic,retain) NSString * unitsString;                                //@synthesize unitsString=_unitsString - In the implementation block
@property (nonatomic,copy) NSString * unpaddedUnitsString;                          //@synthesize unpaddedUnitsString=_unpaddedUnitsString - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * floatNumberFormatter;              //@synthesize floatNumberFormatter=_floatNumberFormatter - In the implementation block
@property (nonatomic,readonly) NSString * zeroUnitsString;                          //@synthesize zeroUnitsString=_zeroUnitsString - In the implementation block
-(void)setUnits:(id)arg1 ;
-(id)init;
-(void)setUseLightText:(BOOL)arg1 ;
-(BOOL)isRTL;
-(void)setRTL:(BOOL)arg1 ;
-(NSString *)unpaddedUnitsString;
-(void)setUnitsString:(NSString *)arg1 ;
-(void)setUnpaddedUnitsString:(NSString *)arg1 ;
-(double)_widthForString:(id)arg1 attributes:(id)arg2 ;
-(NSString *)legendBaseString;
-(void)setLegendBaseString:(NSString *)arg1 ;
-(void)_calculateLegend:(BOOL)arg1 ;
-(NSString *)zeroUnitsString;
-(BOOL)useLightText;
-(id)_legendStringForDistanceString:(id)arg1 appendUnits:(BOOL)arg2 index:(int)arg3 ;
-(id)_uncachedLegendStringsForDistanceString:(id)arg1 ;
-(BOOL)canDisplaySegment:(unsigned long long)arg1 ;
-(void)setSegmentLengthInPixels:(double)arg1 ;
-(double)unitsWidth;
-(NSString *)unitsString;
-(NSNumberFormatter *)floatNumberFormatter;
-(void)setFloatNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)clearCaches:(id)arg1 ;
@end

