/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSMutableArray, NSSQLEntity, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {

	NSMutableArray* _subclauses;
	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(BOOL)disambiguationKeypathHasToMany;
-(id)_generateMulticlauseStringInContext:(id)arg1 ;
-(BOOL)isOrScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
@end

