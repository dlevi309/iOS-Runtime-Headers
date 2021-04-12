/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@class NSArray;

@interface CACElementNamesOverlayViewController : UIViewController <CACViewController>

@property (nonatomic,retain) NSArray * items; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(BOOL)isOverlay;
-(long long)zOrder;
@end

