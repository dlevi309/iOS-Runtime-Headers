/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKSearchFoundationRichText.h>

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText {

	BOOL _businessHoursResolved;
	BOOL _distanceResolved;

}

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved;              //@synthesize businessHoursResolved=_businessHoursResolved - In the implementation block
@property (getter=isDistanceResolved) BOOL distanceResolved;                        //@synthesize distanceResolved=_distanceResolved - In the implementation block
-(BOOL)isRichTextResolved;
-(void)setBusinessHoursResolved:(BOOL)arg1 ;
-(void)setDistanceResolved:(BOOL)arg1 ;
-(BOOL)isBusinessHoursResolved;
-(BOOL)isDistanceResolved;
-(void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2 ;
-(void)resolveDistanceString:(id)arg1 lines:(id)arg2 ;
-(void)resolveDistanceNotFound;
@end

