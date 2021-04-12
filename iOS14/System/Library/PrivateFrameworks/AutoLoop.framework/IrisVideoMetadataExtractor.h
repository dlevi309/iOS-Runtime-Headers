/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class NSMutableDictionary, AVAsset, NSMutableArray, NSDictionary, NSArray;

@interface IrisVideoMetadataExtractor : NSObject {

	BOOL saveAllMetadata;
	BOOL processedFile;
	NSMutableDictionary* videoTrackMetadataDict;
	AVAsset* inMovieAsset;
	NSMutableArray* desiredIrisKeysArray;
	NSDictionary* allMetadata;
	NSArray* _framesMetadataArray;

}

@property (retain) AVAsset * inMovieAsset; 
@property (retain) NSMutableArray * desiredIrisKeysArray; 
@property (readonly) NSArray * framesMetadataArray;                             //@synthesize framesMetadataArray=_framesMetadataArray - In the implementation block
@property (readonly) NSMutableDictionary * videoTrackMetadataDict; 
@property (assign) BOOL processedFile; 
@property (assign) BOOL saveAllMetadata; 
@property (readonly) NSDictionary * allMetadata; 
-(id)init;
-(NSDictionary *)allMetadata;
-(void)setInMovieAsset:(AVAsset *)arg1 ;
-(int)processVideoTrack:(id)arg1 ;
-(int)processStillFrameTimeForAsset:(id)arg1 toDictionary:(id)arg2 ;
-(void)AddFrameDictionary:(id)arg1 withCMTime:(SCD_Struct_Au1)arg2 toArray:(id)arg3 ;
-(int)AddInfoFromMetadata:(id)arg1 withTimeStamp:(SCD_Struct_Au1)arg2 toArray:(id)arg3 ;
-(NSMutableDictionary *)videoTrackMetadataDict;
-(AVAsset *)inMovieAsset;
-(NSMutableArray *)desiredIrisKeysArray;
-(void)setDesiredIrisKeysArray:(NSMutableArray *)arg1 ;
-(BOOL)processedFile;
-(void)setProcessedFile:(BOOL)arg1 ;
-(NSArray *)framesMetadataArray;
-(int)processFile;
-(BOOL)saveAllMetadata;
-(void)setSaveAllMetadata:(BOOL)arg1 ;
@end

