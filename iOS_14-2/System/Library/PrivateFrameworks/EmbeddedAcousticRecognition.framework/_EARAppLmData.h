/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <EmbeddedAcousticRecognition/_EARLmData.h>

@class NSArray;

@interface _EARAppLmData : _EARLmData {

	BOOL roundingEnabled;
	shared_ptr<quasar::AppLmData>* data;

}

@property (nonatomic,readonly) shared_ptr<quasar::AppLmData>* data; 
@property (nonatomic,readonly) NSArray * orderedOovs; 
+(void)initialize;
-(id)metrics;
-(shared_ptr<quasar::AppLmData>*)data;
-(void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 ;
-(BOOL)roundingEnabled;
-(void)setRoundingEnabled:(BOOL)arg1 ;
-(void)setProns:(id)arg1 forWord:(id)arg2 pronIsXsampa:(BOOL)arg3 ;
-(NSArray *)orderedOovs;
-(id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfigPath:(id)arg3 ;
-(void)setXsampaProns:(id)arg1 forWord:(id)arg2 ;
-(void)setAsrProns:(id)arg1 forWord:(id)arg2 ;
-(void)generateLmeData:(id)arg1 ;
@end

