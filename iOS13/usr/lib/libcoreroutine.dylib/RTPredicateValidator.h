/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSError;

@interface RTPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeys;
	NSError* _error;

}

@property (assign,nonatomic) BOOL validated;                       //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSSet * allowedKeys;                  //@synthesize allowedKeys=_allowedKeys - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
+(BOOL)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id*)arg3 ;
-(NSError *)error;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setError:(NSError *)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)setValidated:(BOOL)arg1 ;
-(NSSet *)allowedKeys;
-(BOOL)validated;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setAllowedKeys:(NSSet *)arg1 ;
-(id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2 ;
@end

