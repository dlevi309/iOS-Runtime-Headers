/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmData : NSObject {

	BOOL _roundingEnabled;
	shared_ptr<quasar::LmData>* _data;

}

@property (nonatomic,readonly) shared_ptr<quasar::LmData>* data;              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL roundingEnabled;                            //@synthesize roundingEnabled=_roundingEnabled - In the implementation block
+(void)initialize;
-(id)metrics;
-(id)sources;
-(unsigned long long)queryLimit;
-(double)maxAge;
-(shared_ptr<quasar::LmData>*)data;
-(double)minAge;
-(id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfiguration:(id)arg3 ;
-(void)addDocumentWithUUID:(id)arg1 content:(id)arg2 ;
-(void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 ;
-(BOOL)roomForMoreData;
-(BOOL)roundingEnabled;
-(void)setRoundingEnabled:(BOOL)arg1 ;
@end

