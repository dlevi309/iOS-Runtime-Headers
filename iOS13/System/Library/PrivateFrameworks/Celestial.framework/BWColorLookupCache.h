/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BWColorLookupCache : NSObject {

	NSObject*<OS_dispatch_queue> _coreImageCacheIsolationQueue;
	NSMutableDictionary* _coreImageTableCache;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)colorLookupTablesForFilter:(id)arg1 ;
-(id)fetchColorLookupTablesForFilter:(id)arg1 ;
-(id)identityColorLookupTable;
-(id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3 ;
@end

