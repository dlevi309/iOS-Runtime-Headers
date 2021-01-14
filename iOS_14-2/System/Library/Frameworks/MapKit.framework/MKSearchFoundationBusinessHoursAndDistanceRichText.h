/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKSearchFoundationRichText.h>

@class NSString, UIColor;

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText {

	BOOL _businessHoursResolved;
	BOOL _distanceResolved;
	NSString* _hoursString;
	UIColor* _hoursColor;

}

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved;              //@synthesize businessHoursResolved=_businessHoursResolved - In the implementation block
@property (getter=isDistanceResolved) BOOL distanceResolved;                        //@synthesize distanceResolved=_distanceResolved - In the implementation block
@property (retain) NSString * hoursString;                                          //@synthesize hoursString=_hoursString - In the implementation block
@property (retain) UIColor * hoursColor;                                            //@synthesize hoursColor=_hoursColor - In the implementation block
-(UIColor *)hoursColor;
-(void)setHoursColor:(UIColor *)arg1 ;
-(BOOL)isRichTextResolved;
-(NSString *)hoursString;
-(void)setHoursString:(NSString *)arg1 ;
-(void)setBusinessHoursResolved:(BOOL)arg1 ;
-(void)updateFormattedTextForLines:(id)arg1 ;
-(void)setDistanceResolved:(BOOL)arg1 ;
-(BOOL)isBusinessHoursResolved;
-(BOOL)isDistanceResolved;
-(void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2 ;
-(void)resolveDistanceString:(id)arg1 lines:(id)arg2 ;
-(void)resolveDistanceNotFound;
@end

