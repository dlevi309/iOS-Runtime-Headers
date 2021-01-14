/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateWithError:(id*)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSSet *)allowedKeys;
-(void)setValidated:(BOOL)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)validated;
-(void)setAllowedKeys:(NSSet *)arg1 ;
-(id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2 ;
@end

