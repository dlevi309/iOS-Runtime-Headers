/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASTTemplateRating.h>

@class SAUILocalImageResource, SAUIDecoratedText;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(SAUIDecoratedText *)value;
@end

