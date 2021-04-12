/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNMultiValueDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
+(id)emptyDiff;
-(id)description;
-(BOOL)isEmpty;
-(NSArray *)updates;
-(id)initWithUpdates:(id)arg1 ;
-(id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
@end

