/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSMutableSet, NSError, NSArray;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeysSet;
	NSMutableSet* _usedKeysSet;
	NSError* _error;

}

@property (nonatomic,retain) NSSet * allowedKeysSet;                  //@synthesize allowedKeysSet=_allowedKeysSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * usedKeysSet;              //@synthesize usedKeysSet=_usedKeysSet - In the implementation block
@property (assign,nonatomic) BOOL validated;                          //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * allowedKeys; 
@property (nonatomic,copy,readonly) NSArray * usedKeys; 
-(NSError *)error;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setError:(NSError *)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)setValidated:(BOOL)arg1 ;
-(NSArray *)allowedKeys;
-(BOOL)validated;
-(void)setAllowedKeysSet:(NSSet *)arg1 ;
-(NSSet *)allowedKeysSet;
-(void)setUsedKeysSet:(NSMutableSet *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setAllowedKeys:(NSArray *)arg1 ;
-(NSArray *)usedKeys;
-(void)resetUsedKeys;
-(NSMutableSet *)usedKeysSet;
@end

