/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RLMRealm *)realm;
-(BOOL)isOptional;
-(id)sortedResultsUsingDescriptors:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)addNotificationBlock:(/*^block*/id)arg1;
-(unsigned long long)indexOfObject:(id)arg1;
-(id)valueForKey:(id)arg1;
-(unsigned long long)count;
-(id)lastObject;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1;
-(id)objectsWhere:(id)arg1;
-(id)objectsWithPredicate:(id)arg1;
-(id)averageOfProperty:(id)arg1;
-(id)minOfProperty:(id)arg1;
-(int)type;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1;
-(id)maxOfProperty:(id)arg1;
-(id)sumOfProperty:(id)arg1;
-(id)objectsWhere:(id)arg1 args:(char*)arg2;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
-(unsigned long long)indexOfObjectWhere:(id)arg1;
-(NSString *)objectClassName;

@end

