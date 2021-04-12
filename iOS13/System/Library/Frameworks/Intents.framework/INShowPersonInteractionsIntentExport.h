/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INPerson, NSString;


@protocol INShowPersonInteractionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * person; 
@property (nonatomic,copy) NSString * focusItemIdentifier; 
@required
-(id)init;
-(INPerson *)person;
-(void)setPerson:(id)arg1;
-(NSString *)focusItemIdentifier;
-(void)setFocusItemIdentifier:(id)arg1;

@end

