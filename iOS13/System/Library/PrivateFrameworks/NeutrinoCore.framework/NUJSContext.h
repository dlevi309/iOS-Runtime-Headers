/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSHashTable, NSMutableArray, NSMutableDictionary, JSContext, NSError;

@interface NUJSContext : NSObject {

	NSHashTable* _collectedProxies;
	NSMutableArray* _stateStack;
	NSMutableDictionary* _functions;
	JSContext* _jsContext;

}

@property (retain) JSContext * jsContext;                  //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,retain) NSError * error; 
+(void)execute:(/*^block*/id)arg1 ;
+(BOOL)validateValuesAreNumbers:(id)arg1 error:(out id*)arg2 ;
+(id)contextForContext:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)addProxy:(id)arg1 ;
-(id)currentState;
-(JSContext *)jsContext;
-(void)setJsContext:(JSContext *)arg1 ;
-(void)popState;
-(void)pushState:(id)arg1 ;
-(void)setupBuiltInFunctions;
-(void)resetAllProxies;
-(id)functionForKey:(id)arg1 ;
-(void)setFunction:(id)arg1 forKey:(id)arg2 ;
@end

