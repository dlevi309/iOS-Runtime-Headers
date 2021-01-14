/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviewDate; 
@property (nonatomic,retain) SAUIDecoratedText * reviewText; 
@property (nonatomic,retain) SAUIDecoratedText * reviewer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userReviewItem;
+(id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)reviewText;
-(SAUIDecoratedText *)reviewDate;
-(void)setReviewDate:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewer;
-(void)setReviewer:(SAUIDecoratedText *)arg1 ;
-(void)setReviewText:(SAUIDecoratedText *)arg1 ;
@end

