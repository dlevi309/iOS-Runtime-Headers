/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)popState;
-(id)init;
-(id)currentState;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(JSContext *)jsContext;
-(void)setupBuiltInFunctions;
-(void)addProxy:(id)arg1 ;
-(void)resetAllProxies;
-(void)pushState:(id)arg1 ;
-(id)functionForKey:(id)arg1 ;
-(void)setFunction:(id)arg1 forKey:(id)arg2 ;
-(void)setJsContext:(JSContext *)arg1 ;
@end

