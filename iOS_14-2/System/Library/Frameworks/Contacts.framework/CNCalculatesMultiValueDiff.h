/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface CNCalculatesMultiValueDiff : NSObject {

	NSArray* _multiValue1;
	NSArray* _multiValue2;
	NSOrderedSet* _originalIdentifiers;
	NSOrderedSet* _finalIdentifiers;
	NSMutableOrderedSet* _addedIdentifiers;
	NSMutableOrderedSet* _removedIdentifiers;
	NSMutableOrderedSet* _sameIdentifiers;
	NSMutableOrderedSet* _calculatedFinalIdentifiers;
	NSMutableArray* _updates;

}
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
-(id)updates;
-(id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2 ;
-(void)calculateDiff;
-(void)setupOriginalIdentifiers;
-(void)setupFinalIdentifiers;
-(void)setupAddedIdentifiers;
-(void)appendAddUpdates;
-(void)setupRemovedIdentifiers;
-(void)setupSameIdentifiers;
-(void)setupCalculatedFinalIdentifiers;
-(void)appendRemoveUpdates;
-(void)appendReplaceUpdates;
-(void)appendReorderUpdates;
@end

