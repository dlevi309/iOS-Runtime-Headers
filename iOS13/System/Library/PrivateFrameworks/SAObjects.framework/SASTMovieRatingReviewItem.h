/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, SASTTemplatePercentageRating, NSString;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviews; 
@property (nonatomic,retain) SASTTemplatePercentageRating * templatePercentageRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieRatingReviewItem;
+(id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)reviews;
-(void)setReviews:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(SASTTemplatePercentageRating *)templatePercentageRating;
-(void)setTemplatePercentageRating:(SASTTemplatePercentageRating *)arg1 ;
@end

