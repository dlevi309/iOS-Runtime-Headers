/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INContactCard;


@protocol INSetRelationshipIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INContactCard * meCard; 
@required
-(void)setMeCard:(id)arg1;
-(INContactCard *)meCard;
-(long long)code;

@end

