/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@class NSArray;

@interface CACElementNamesOverlayViewController : UIViewController <CACViewController>

@property (nonatomic,retain) NSArray * items; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(long long)zOrder;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)items;
-(BOOL)isOverlay;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
@end

