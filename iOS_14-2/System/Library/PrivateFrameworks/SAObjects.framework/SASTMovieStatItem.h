/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

