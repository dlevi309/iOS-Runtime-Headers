/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class NSMutableArray;

@interface vtVector : NSObject {

	unsigned _vVectorElements;
	NSMutableArray* _vVectorData;

}

@property (assign) unsigned vVectorElements;                  //@synthesize vVectorElements=_vVectorElements - In the implementation block
@property (retain) NSMutableArray * vVectorData;              //@synthesize vVectorData=_vVectorData - In the implementation block
-(int)addElement:(id)arg1 ;
-(id)init;
-(NSMutableArray *)vVectorData;
-(unsigned)vVectorElements;
-(void)setVVectorElements:(unsigned)arg1 ;
-(void)setVVectorData:(NSMutableArray *)arg1 ;
@end

