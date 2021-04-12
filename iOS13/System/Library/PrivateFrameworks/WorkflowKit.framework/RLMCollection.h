/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSString, RLMRealm;


@protocol RLMCollection <NSFastEnumeration,RLMThreadConfined>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,copy,readonly) NSString * objectClassName; 
@property (nonatomic,readonly) RLMRealm * realm; 
@required
-(unsigned long long)count;
-(int)type;
-(id)objectAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfObject:(id)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(id)firstObject;
-(id)lastObject;
-(id)valueForKey:(id)arg1;
-(RLMRealm *)realm;
-(BOOL)isOptional;
-(NSString *)objectClassName;
-(id)objectsWhere:(id)arg1 args:(char*)arg2;
-(id)objectsWithPredicate:(id)arg1;
-(id)objectsWhere:(id)arg1;
-(id)addNotificationBlock:(/*^block*/id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1;
-(id)averageOfProperty:(id)arg1;
-(id)sortedResultsUsingDescriptors:(id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
-(id)minOfProperty:(id)arg1;
-(id)maxOfProperty:(id)arg1;
-(id)sumOfProperty:(id)arg1;

@end

