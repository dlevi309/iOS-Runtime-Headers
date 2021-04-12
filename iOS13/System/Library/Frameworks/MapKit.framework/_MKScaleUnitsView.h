/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isRTL;
-(void)setRTL:(BOOL)arg1 ;
-(void)setUnits:(id)arg1 ;
-(void)clearCaches:(id)arg1 ;
-(void)setUseLightText:(BOOL)arg1 ;
-(NSString *)unpaddedUnitsString;
-(void)setUnitsString:(NSString *)arg1 ;
-(void)setUnpaddedUnitsString:(NSString *)arg1 ;
-(double)_widthForString:(id)arg1 attributes:(id)arg2 ;
-(NSString *)legendBaseString;
-(void)setLegendBaseString:(NSString *)arg1 ;
-(void)_calculateLegend:(BOOL)arg1 ;
-(id)_legendStringForDistanceString:(id)arg1 appendUnits:(BOOL)arg2 index:(int)arg3 ;
-(id)_uncachedLegendStringsForDistanceString:(id)arg1 ;
-(BOOL)canDisplaySegment:(unsigned long long)arg1 ;
-(void)setSegmentLengthInPixels:(double)arg1 ;
-(BOOL)useLightText;
-(double)unitsWidth;
-(NSString *)unitsString;
-(NSNumberFormatter *)floatNumberFormatter;
-(void)setFloatNumberFormatter:(NSNumberFormatter *)arg1 ;
@end

