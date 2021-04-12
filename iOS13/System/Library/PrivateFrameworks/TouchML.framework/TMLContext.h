/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class TMLMetaContext, NSMutableDictionary, NSMutableSet, NSMutableArray, JSContext, NSArray, NSException, JSValue, NSString, NSObject, NSDictionary;

@interface TMLContext : NSObject {

	TMLMetaContext* _metaContext;
	NSMutableDictionary* _objects;
	NSMutableSet* _contextObjects;
	NSMutableSet* _weakObjectIdentifiers;
	NSMutableArray* _signalHandlers;
	JSContext* _jsContext;
	NSArray* _currentEvaluationBindings;
	NSException* _jsEvaluationException;
	JSValue* _apiObject;
	NSString* _apiObjectKey;
	BOOL _initialized;
	NSMutableSet* _requires;
	unsigned long long _options;
	BOOL _beingDisposed;

}

@property (nonatomic,readonly) NSObject * rootObject; 
@property (nonatomic,readonly) NSDictionary * allObjects; 
+(void)initialize;
+(id)currentContext;
+(BOOL)loadClasses:(id)arg1 ;
+(void)initializeJSContext:(id)arg1 ;
+(Class)createClassFromPath:(id)arg1 ;
+(id)loadMetaContextWithSource:(id)arg1 path:(id)arg2 options:(unsigned long long)arg3 ;
+(BOOL)loadClasses:(id)arg1 path:(id)arg2 ;
+(BOOL)loadClassesFromPath:(id)arg1 ;
+(id)cloneContext:(id)arg1 objects:(id)arg2 ;
+(void)addGloballyRequiredModules:(id)arg1 ;
+(void)printStatisticsWithInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NSDictionary *)allObjects;
-(NSObject *)rootObject;
-(BOOL)valid;
-(void)dispose;
-(id)objectWithIdentifier:(id)arg1 ;
-(void)addObject:(id)arg1 withIdentifier:(id)arg2 ;
-(void)makeWeakObjectWithIdentifier:(id)arg1 ;
-(BOOL)loadSourceFromPath:(id)arg1 ;
-(BOOL)raiseException:(id)arg1 ;
-(id)callFunction:(id)arg1 arguments:(id)arg2 returnType:(unsigned long long)arg3 ;
-(BOOL)loadSource:(id)arg1 ;
-(void)disposeIfNecessary;
-(void)requireModule:(id)arg1 ;
-(void)raiseJSException:(id)arg1 ;
-(id)evaluateExpression:(id)arg1 ofType:(unsigned long long)arg2 withBindings:(id)arg3 ;
-(id)metaContext;
-(id)apiObject;
-(void)callFunction:(id)arg1 arguments:(id)arg2 ;
-(void)resetException;
-(BOOL)loadSource:(id)arg1 path:(id)arg2 ;
-(void)initizalizeContext;
-(void)addObjectReference:(id)arg1 ;
-(void)initializeWithCloneContext:(id)arg1 ;
-(id)objectWithIdentifier:(id)arg1 unwrapWeak:(BOOL)arg2 ;
-(id)objectWithIdentifier:(id)arg1 unwrapWeak:(BOOL)arg2 createIfMissing:(BOOL)arg3 ;
-(id)createObjectFromMetaObject:(id)arg1 parent:(id)arg2 ;
-(id)processValue:(id)arg1 ofType:(unsigned long long)arg2 selfValue:(id)arg3 ;
-(id)applyProperties:(id)arg1 inOrder:(id)arg2 toObject:(id)arg3 ;
-(id)didCreateObject:(id)arg1 ;
-(void)attachToAPIObject;
-(void)initializeJSContext;
-(id)existingObjectWithIdentifier:(id)arg1 ;
-(void)resetJSException;
-(id)objectWithIdentifierNoCreate:(id)arg1 ;
-(id)objectsOfType:(id)arg1 ;
@end

