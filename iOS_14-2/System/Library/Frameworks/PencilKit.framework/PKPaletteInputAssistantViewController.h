/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKDrawingPaletteInputAssistantViewStateObserver.h>

@class PKDrawingPaletteInputAssistantView, NSString;

@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver> {

	PKDrawingPaletteInputAssistantView* _inputAssistantView;

}

@property (nonatomic,retain) PKDrawingPaletteInputAssistantView * inputAssistantView;              //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg1 ;
-(PKDrawingPaletteInputAssistantView *)inputAssistantView;
-(CGSize)_preferredContentSize;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)paletteInputAssistantViewDidChangeViewState:(id)arg1 ;
@end

