/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateWithError:(id*)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)allowedKeys;
-(NSArray *)usedKeys;
-(void)setValidated:(BOOL)arg1 ;
-(NSMutableSet *)usedKeysSet;
-(void)visitPredicate:(id)arg1 ;
-(void)setAllowedKeysSet:(NSSet *)arg1 ;
-(NSSet *)allowedKeysSet;
-(void)setUsedKeysSet:(NSMutableSet *)arg1 ;
-(void)resetUsedKeys;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)validated;
-(void)setAllowedKeys:(NSArray *)arg1 ;
@end

