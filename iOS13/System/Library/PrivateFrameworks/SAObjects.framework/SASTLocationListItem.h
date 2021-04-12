/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SASTTemplateStarRating, NSString;

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,retain) SAUIDecoratedText * formattedDistance; 
@property (nonatomic,retain) SASTTemplateStarRating * rating; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationListItem;
+(id)locationListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)title;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(id<SASTTemplateAction>)action;
-(SAUIDecoratedText *)subtitle;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(SASTTemplateStarRating *)rating;
-(void)setRating:(SASTTemplateStarRating *)arg1 ;
-(id)encodedClassName;
-(SAUIDecoratedText *)formattedDistance;
-(void)setFormattedDistance:(SAUIDecoratedText *)arg1 ;
@end

