/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableDictionary, NSData;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {

	NSMutableDictionary* _filter;
	NSMutableDictionary* _pids;
	NSMutableDictionary* _processes;
	NSMutableDictionary* _processImagePaths;
	NSMutableDictionary* _subsystems;
	NSMutableDictionary* _categories;

}

@property (nonatomic,readonly) NSData * data; 
-(id)initWithPredicate:(id)arg1 ;
-(void)addProcessID:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcess:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addCategory:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3 ;
-(unsigned long long)flagsForPredicate:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(NSData *)data;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
@end

