/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {

	BOOL isAudioOnly;
	TSPData* _tspData;

}

@property (nonatomic,retain) TSPData * tspData;              //@synthesize tspData=_tspData - In the implementation block
-(BOOL)isAudioOnly;
-(TSPData *)tspData;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(void)setTspData:(TSPData *)arg1 ;
@end

