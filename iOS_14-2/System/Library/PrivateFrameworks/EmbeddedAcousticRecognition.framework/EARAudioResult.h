/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSData;

@interface EARAudioResult : NSObject {

	NSData* _audioResultMat;
	unsigned long long _audioResultsNumVectors;
	unsigned long long _audioResultsVectorSize;

}

@property (nonatomic,retain) NSData * audioResultMat;                                //@synthesize audioResultMat=_audioResultMat - In the implementation block
@property (assign,nonatomic) unsigned long long audioResultsNumVectors;              //@synthesize audioResultsNumVectors=_audioResultsNumVectors - In the implementation block
@property (assign,nonatomic) unsigned long long audioResultsVectorSize;              //@synthesize audioResultsVectorSize=_audioResultsVectorSize - In the implementation block
-(id)initWithAudioResultMat:(id)arg1 vectorSize:(unsigned long long)arg2 numVectors:(unsigned long long)arg3 ;
-(NSData *)audioResultMat;
-(void)setAudioResultMat:(NSData *)arg1 ;
-(unsigned long long)audioResultsNumVectors;
-(void)setAudioResultsNumVectors:(unsigned long long)arg1 ;
-(unsigned long long)audioResultsVectorSize;
-(void)setAudioResultsVectorSize:(unsigned long long)arg1 ;
@end

