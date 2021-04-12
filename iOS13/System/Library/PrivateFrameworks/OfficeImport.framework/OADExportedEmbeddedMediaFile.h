/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(TSPData *)tspData;
-(void)setTspData:(TSPData *)arg1 ;
@end

