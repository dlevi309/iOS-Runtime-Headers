/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)source;
-(id)initWithSymbol:(id)arg1 ;
-(id)details;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(OSASymbolInfo *)symbolInfo;
-(id)legacy_details;
-(unsigned long long)used_index;
-(void)setUsed_index:(unsigned long long)arg1 ;
@end

