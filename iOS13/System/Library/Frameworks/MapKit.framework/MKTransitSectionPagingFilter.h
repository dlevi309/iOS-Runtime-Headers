/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKTransitSectionPagingFilter : NSObject {

	BOOL _limitNumLines;
	unsigned long long _numLinesFallbackThreshold;
	unsigned long long _numLinesFallbackValue;

}

@property (assign,nonatomic) BOOL limitNumLines;                                        //@synthesize limitNumLines=_limitNumLines - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackThreshold;              //@synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackValue;                  //@synthesize numLinesFallbackValue=_numLinesFallbackValue - In the implementation block
+(id)defaultFilterForDepartures;
+(id)defaultFilterForInactiveLines;
-(void)setLimitNumLines:(BOOL)arg1 ;
-(void)setNumLinesFallbackThreshold:(unsigned long long)arg1 ;
-(void)setNumLinesFallbackValue:(unsigned long long)arg1 ;
-(BOOL)limitNumLines;
-(unsigned long long)numLinesFallbackThreshold;
-(unsigned long long)numLinesFallbackValue;
@end

