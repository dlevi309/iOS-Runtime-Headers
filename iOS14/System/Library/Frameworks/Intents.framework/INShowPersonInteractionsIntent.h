/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INShowPersonInteractionsIntentExport.h>

@class INPerson, NSString;

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport> {

	INPerson* _person;
	NSString* _focusItemIdentifier;

}

@property (nonatomic,copy) INPerson * person;                           //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSString * focusItemIdentifier;              //@synthesize focusItemIdentifier=_focusItemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(INPerson *)person;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPerson:(INPerson *)arg1 ;
-(void)setFocusItemIdentifier:(NSString *)arg1 ;
-(NSString *)focusItemIdentifier;
-(id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

