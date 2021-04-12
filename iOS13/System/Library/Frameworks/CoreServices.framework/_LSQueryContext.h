/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(id)defaultContext;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
+(BOOL)simulateLimitedMappingForXCTests;
-(id)init;
-(id)debugDescription;
-(id)_init;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)resolveQueries:(id)arg1 error:(id*)arg2 ;
-(id<_LSQueryResolving>)_resolver;
-(void)clearCaches;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
@end

