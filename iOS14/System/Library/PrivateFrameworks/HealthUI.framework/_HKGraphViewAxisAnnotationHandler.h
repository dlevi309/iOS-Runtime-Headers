/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesAxisAnnotation.h>

@class NSMapTable, NSString;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation> {

	BOOL _disableDuringTiling;
	BOOL _clearedPreviousAnnotations;
	NSMapTable* _seriesToAnnotations;

}

@property (nonatomic,retain) NSMapTable * seriesToAnnotations;              //@synthesize seriesToAnnotations=_seriesToAnnotations - In the implementation block
@property (assign,nonatomic) BOOL clearedPreviousAnnotations;               //@synthesize clearedPreviousAnnotations=_clearedPreviousAnnotations - In the implementation block
@property (assign,nonatomic) BOOL disableDuringTiling;                      //@synthesize disableDuringTiling=_disableDuringTiling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)clearAxisAnnotations;
-(void)setDisableDuringTiling:(BOOL)arg1 ;
-(void)startAnnotationSequence;
-(long long)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2 ;
-(BOOL)disableDuringTiling;
-(void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 modelCoordinate:(id)arg3 ;
-(NSMapTable *)seriesToAnnotations;
-(void)setSeriesToAnnotations:(NSMapTable *)arg1 ;
-(BOOL)clearedPreviousAnnotations;
-(void)setClearedPreviousAnnotations:(BOOL)arg1 ;
@end

