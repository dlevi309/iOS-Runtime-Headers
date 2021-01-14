/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

