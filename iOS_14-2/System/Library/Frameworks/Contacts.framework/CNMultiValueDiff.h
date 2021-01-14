/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNMultiValueDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)emptyDiff;
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
-(NSArray *)updates;
-(id)description;
-(id)initWithUpdates:(id)arg1 ;
-(id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEmpty;
@end

