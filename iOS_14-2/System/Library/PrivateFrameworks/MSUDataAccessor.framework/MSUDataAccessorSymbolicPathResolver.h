/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
*/


@class NSMutableDictionary;

@interface MSUDataAccessorSymbolicPathResolver : NSObject {

	NSMutableDictionary* _overrides;

}
+(id)symbolicPathResolver;
+(id)resolvedSymbol:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)resolve:(id)arg1 error:(id*)arg2 ;
-(void)overrideSymbol:(id)arg1 resolvedPath:(id)arg2 ;
-(void)dealloc;
@end

