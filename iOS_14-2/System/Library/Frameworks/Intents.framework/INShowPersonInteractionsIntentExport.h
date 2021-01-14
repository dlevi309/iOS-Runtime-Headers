/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INPerson, NSString;


@protocol INShowPersonInteractionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * focusItemIdentifier; 
@required
-(INPerson *)person;
-(id)init;
-(void)setPerson:(id)arg1;
-(void)setFocusItemIdentifier:(id)arg1;
-(NSString *)focusItemIdentifier;

@end

