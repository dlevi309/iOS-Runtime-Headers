/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SASTTemplateStarRating *)rating;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)subtitle;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(void)setRating:(SASTTemplateStarRating *)arg1 ;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)formattedDistance;
-(SAUIDecoratedText *)title;
-(void)setFormattedDistance:(SAUIDecoratedText *)arg1 ;
@end

