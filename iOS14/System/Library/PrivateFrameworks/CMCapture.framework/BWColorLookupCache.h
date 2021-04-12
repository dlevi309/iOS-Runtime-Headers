/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BWColorLookupCache : NSObject {

	NSObject*<OS_dispatch_queue> _coreImageCacheIsolationQueue;
	NSMutableDictionary* _coreImageTableCache;

}
+(void)initialize;
-(id)init;
-(id)identityColorLookupTable;
-(id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3 ;
-(id)fetchColorLookupTablesForFilter:(id)arg1 ;
-(id)colorLookupTablesForFilter:(id)arg1 ;
-(void)dealloc;
@end

