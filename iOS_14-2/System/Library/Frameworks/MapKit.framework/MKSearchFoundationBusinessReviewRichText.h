/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKSearchFoundationRichText.h>

@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText {

	BOOL _reviewResolved;

}

@property (getter=isReviewResolved) BOOL reviewResolved;              //@synthesize reviewResolved=_reviewResolved - In the implementation block
-(BOOL)isRichTextResolved;
-(void)setReviewResolved:(BOOL)arg1 ;
-(BOOL)isReviewResolved;
-(void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
-(void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
@end

