/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface SlalomWriteOperation : NSObject {

	unsigned short serviceCode;
	unsigned short blockNumber;
	unsigned short offsets;

}

@property (assign) unsigned short serviceCode; 
@property (assign) unsigned short blockNumber; 
@property (assign) unsigned short offsets; 
-(id)description;
-(unsigned short)offsets;
-(unsigned short)serviceCode;
-(unsigned short)blockNumber;
-(void)setServiceCode:(unsigned short)arg1 ;
-(void)setBlockNumber:(unsigned short)arg1 ;
-(void)setOffsets:(unsigned short)arg1 ;
@end

