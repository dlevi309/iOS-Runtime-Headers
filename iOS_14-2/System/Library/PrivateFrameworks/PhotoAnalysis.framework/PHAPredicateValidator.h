/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSSet;

@interface PHAPredicateValidator : NSObject {

	NSSet* _allowedKeyPaths;

}

@property (retain) NSSet * allowedKeyPaths;              //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
-(NSSet *)allowedKeyPaths;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(void)setAllowedKeyPaths:(NSSet *)arg1 ;
@end

