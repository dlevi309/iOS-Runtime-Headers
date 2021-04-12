/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKVisualizationManager.h>

@protocol ICHandwritingDebugDelegate, OS_dispatch_queue;
@class NSArray, UITextView, NSObject, UIActivityIndicatorView, NSString;

@interface ICHandwritingDebugViewController : UIViewController <PKVisualizationManager> {

	id<ICHandwritingDebugDelegate> _handwritingDebugDelegate;
	NSArray* _drawings;
	UITextView* _textView;
	NSObject*<OS_dispatch_queue> _recognitionQueue;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSArray * drawings;                                                          //@synthesize drawings=_drawings - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recognitionQueue;                               //@synthesize recognitionQueue=_recognitionQueue - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<ICHandwritingDebugDelegate> handwritingDebugDelegate;              //@synthesize handwritingDebugDelegate=_handwritingDebugDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)refresh;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)visualizationManagerDidUpdateRecognitionStatus:(id)arg1 ;
-(NSArray *)drawings;
-(void)setDrawings:(NSArray *)arg1 ;
-(void)setHandwritingDebugDelegate:(id<ICHandwritingDebugDelegate>)arg1 ;
-(id<ICHandwritingDebugDelegate>)handwritingDebugDelegate;
-(id)handwritingDebugWindow;
-(NSObject*<OS_dispatch_queue>)recognitionQueue;
-(void)setRecognitionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

