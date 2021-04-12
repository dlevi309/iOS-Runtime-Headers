/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isOrScoped;
-(id)disambiguatingEntity;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateMulticlauseStringInContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)disambiguationKeypathHasToMany;
-(id)disambiguationKeypath;
@end

