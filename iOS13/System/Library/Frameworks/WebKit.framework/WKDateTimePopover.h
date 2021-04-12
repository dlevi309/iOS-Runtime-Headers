/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKContentView, NSString;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKDateTimePopoverViewController>* _viewController;
	WKContentView* _view;

}

@property (nonatomic,readonly) NSString * calendarType; 
-(id)viewController;
-(void)clear:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
-(NSString *)calendarType;
@end

