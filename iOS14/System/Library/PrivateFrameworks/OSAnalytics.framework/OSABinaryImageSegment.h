/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject {

	int _source;
	OSASymbolInfo* _symbolInfo;
	unsigned long long _used_index;

}

@property (assign) int source;                                          //@synthesize source=_source - In the implementation block
@property (assign) unsigned long long used_index;                       //@synthesize used_index=_used_index - In the implementation block
@property (nonatomic,readonly) OSASymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(void)setSource:(int)arg1 ;
-(id)initWithSymbol:(id)arg1 ;
-(OSASymbolInfo *)symbolInfo;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(id)legacy_details;
-(unsigned long long)used_index;
-(void)setUsed_index:(unsigned long long)arg1 ;
-(id)details;
-(int)source;
@end

