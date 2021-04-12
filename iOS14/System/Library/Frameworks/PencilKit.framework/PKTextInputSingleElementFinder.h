/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTextInputElementsFinder.h>

@class PKTextInputElement, NSSet;

@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder {

	BOOL _finished;
	PKTextInputElement* _foundElement;
	NSSet* _candidateElements;

}

@property (nonatomic,readonly) PKTextInputElement * foundElement;              //@synthesize foundElement=_foundElement - In the implementation block
@property (nonatomic,readonly) NSSet * candidateElements;                      //@synthesize candidateElements=_candidateElements - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
-(BOOL)isFinished;
-(void)_finishSingleElementSearchIfReadyAtPosition:(CGPoint)arg1 coordinateSpace:(id)arg2 candidates:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)findSingleElementCloseToPosition:(CGPoint)arg1 coordinateSpace:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKTextInputElement *)foundElement;
-(NSSet *)candidateElements;
@end

