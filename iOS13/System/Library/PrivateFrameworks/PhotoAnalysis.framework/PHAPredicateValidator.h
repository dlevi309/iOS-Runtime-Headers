/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSSet;

@interface PHAPredicateValidator : NSObject {

	NSSet* _allowedKeyPaths;

}

@property (retain) NSSet * allowedKeyPaths;              //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(NSSet *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSSet *)arg1 ;
@end

