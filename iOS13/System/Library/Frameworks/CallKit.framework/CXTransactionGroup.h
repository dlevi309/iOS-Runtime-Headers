/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CXTransactionGroup : NSObject {

	NSMutableDictionary* _callSourceIdentifierToTransaction;
	NSMutableArray* _mutableCallSources;

}

@property (nonatomic,readonly) NSMutableDictionary * callSourceIdentifierToTransaction;              //@synthesize callSourceIdentifierToTransaction=_callSourceIdentifierToTransaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableCallSources;                                  //@synthesize mutableCallSources=_mutableCallSources - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy,readonly) NSArray * callSources; 
@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,copy,readonly) NSArray * allActions; 
-(id)init;
-(id)description;
-(BOOL)isComplete;
-(NSArray *)allActions;
-(NSMutableArray *)mutableCallSources;
-(NSArray *)callSources;
-(void)addAction:(id)arg1 forCallSource:(id)arg2 ;
-(id)transactionForCallSource:(id)arg1 ;
-(NSMutableDictionary *)callSourceIdentifierToTransaction;
-(NSArray *)transactions;
@end

