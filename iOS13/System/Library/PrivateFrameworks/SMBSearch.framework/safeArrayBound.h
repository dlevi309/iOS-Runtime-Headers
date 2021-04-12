/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@interface safeArrayBound : NSObject {

	unsigned _cElements;
	unsigned _lowBound;

}

@property (assign) unsigned cElements;              //@synthesize cElements=_cElements - In the implementation block
@property (assign) unsigned lowBound;               //@synthesize lowBound=_lowBound - In the implementation block
-(id)initWithElements:(unsigned)arg1 LowBound:(unsigned)arg2 ;
-(unsigned)cElements;
-(void)setCElements:(unsigned)arg1 ;
-(unsigned)lowBound;
-(void)setLowBound:(unsigned)arg1 ;
@end

