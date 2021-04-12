/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setupRemovedIdentifiers;
-(void)setupSameIdentifiers;
-(void)setupCalculatedFinalIdentifiers;
-(void)appendRemoveUpdates;
-(void)appendAddUpdates;
-(void)appendReplaceUpdates;
-(void)appendReorderUpdates;
@end

