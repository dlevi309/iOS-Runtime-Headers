/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary, NSArray;

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {

	unsigned _count;
	unsigned _byteCount;
	NSMutableDictionary* _errorsDict;

}

@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned byteCount;              //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSArray * errors; 
-(id)init;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(NSArray *)errors;
-(BOOL)wouldWrapWithByteCount:(unsigned)arg1 ;
-(void)addErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(unsigned)byteCount;
-(void)setByteCount:(unsigned)arg1 ;
@end

