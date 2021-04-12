/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

