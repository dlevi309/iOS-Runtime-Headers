/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle {

	TIWordSearch* _wordSearch;

}

@property (nonatomic,retain) TIWordSearch * wordSearch;              //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)load;
-(TIWordSearch *)wordSearch;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
@end

