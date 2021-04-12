/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKQuery.h>

@class NSString, CHTranscriptionQuery;

@interface PKTranscriptionQuery : PKQuery {

	NSString* _transcription;
	CHTranscriptionQuery* _transcriptionQuery;

}

@property (nonatomic,retain) CHTranscriptionQuery * transcriptionQuery;              //@synthesize transcriptionQuery=_transcriptionQuery - In the implementation block
@property (nonatomic,readonly) NSString * transcription;                             //@synthesize transcription=_transcription - In the implementation block
-(void)start;
-(void)pause;
-(void)teardown;
-(void)dealloc;
-(id)initWithRecognitionSessionManager:(id)arg1 ;
-(NSString *)transcription;
-(CHTranscriptionQuery *)transcriptionQuery;
-(void)setTranscriptionQuery:(CHTranscriptionQuery *)arg1 ;
-(id)contextualTextResultsForContextStrokes:(id)arg1 completion:(/*^block*/id)arg2 shouldCancel:(/*^block*/id)arg3 ;
@end

