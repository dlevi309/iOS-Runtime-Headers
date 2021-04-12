/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSArray;

@interface CACDisambiguationHandler : NSObject {

	NSArray* _labeledElements;
	/*^block*/id _chosenLabeledElementHandler;

}

@property (retain) NSArray * labeledElements;                           //@synthesize labeledElements=_labeledElements - In the implementation block
@property (nonatomic,copy) id chosenLabeledElementHandler;              //@synthesize chosenLabeledElementHandler=_chosenLabeledElementHandler - In the implementation block
-(NSArray *)labeledElements;
-(void)setLabeledElements:(NSArray *)arg1 ;
-(id)initWithLabeledElements:(id)arg1 ;
-(void)setChosenLabeledElementHandler:(id)arg1 ;
-(void)handleChosenLabeledElement:(id)arg1 ;
-(id)chosenLabeledElementHandler;
@end

