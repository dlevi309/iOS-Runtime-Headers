/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)disambiguatingEntity;
-(id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)disambiguationKeypathHasToMany;
-(id)disambiguationKeypath;
@end

