/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SASTTemplatePercentageRating;

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,retain) SASTTemplatePercentageRating * reviewerRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieStatItem;
+(id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(SASTTemplatePercentageRating *)reviewerRating;
-(void)setReviewerRating:(SASTTemplatePercentageRating *)arg1 ;
@end

