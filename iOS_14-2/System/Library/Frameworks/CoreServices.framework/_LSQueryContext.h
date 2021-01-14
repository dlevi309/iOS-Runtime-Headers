/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(BOOL)simulateLimitedMappingForXCTests;
+(id)defaultContext;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
-(void)clearCaches;
-(id)init;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)resolveQueries:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id<_LSQueryResolving>)_resolver;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(id)_init;
@end

