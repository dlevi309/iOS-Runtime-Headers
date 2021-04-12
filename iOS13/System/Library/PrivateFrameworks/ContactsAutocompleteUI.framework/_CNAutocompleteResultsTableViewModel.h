/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSMutableDictionary;

@interface _CNAutocompleteResultsTableViewModel : NSObject {

	NSMutableDictionary* _sections;
	unsigned long long _numberOfSections;

}

@property (assign,nonatomic) unsigned long long numberOfSections;                        //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNonEmptySections; 
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSections;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
-(void)setSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfNonEmptySections;
-(id)initWithNumberOfSections:(unsigned long long)arg1 ;
-(id)computeDiffForModel:(id)arg1 ;
@end

