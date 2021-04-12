/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class safeArrayBound, NSArray;

@interface vtSafeArray : NSObject {

	unsigned short _cDims;
	unsigned short _fFeatures;
	unsigned _cbElementSize;
	safeArrayBound* _rgsBoundArr;
	NSArray* _vData;

}

@property (assign) unsigned short cDims;                      //@synthesize cDims=_cDims - In the implementation block
@property (assign) unsigned short fFeatures;                  //@synthesize fFeatures=_fFeatures - In the implementation block
@property (assign) unsigned cbElementSize;                    //@synthesize cbElementSize=_cbElementSize - In the implementation block
@property (retain) safeArrayBound * rgsBoundArr;              //@synthesize rgsBoundArr=_rgsBoundArr - In the implementation block
@property (retain) NSArray * vData;                           //@synthesize vData=_vData - In the implementation block
-(NSArray *)vData;
-(unsigned short)cDims;
-(void)setVData:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ElementSize:(unsigned)arg2 ;
-(void)setCDims:(unsigned short)arg1 ;
-(unsigned short)fFeatures;
-(void)setFFeatures:(unsigned short)arg1 ;
-(unsigned)cbElementSize;
-(void)setCbElementSize:(unsigned)arg1 ;
-(safeArrayBound *)rgsBoundArr;
-(void)setRgsBoundArr:(safeArrayBound *)arg1 ;
@end

