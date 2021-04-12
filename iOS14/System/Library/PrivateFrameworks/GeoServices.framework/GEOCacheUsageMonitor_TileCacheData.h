/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned)arg1 ;
-(id)init;
-(unsigned)count;
-(NSArray *)errors;
-(unsigned)byteCount;
-(BOOL)wouldWrapWithByteCount:(unsigned)arg1 ;
-(void)addErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(void)setByteCount:(unsigned)arg1 ;
@end

