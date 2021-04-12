/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemInteractionHandler.h>

@protocol _UITextContent;
@class UIView, UIAction, NSString;

@interface _UITextDataDetectedLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {

	NSRange _range;
	CGRect _rect;
	UIView*<_UITextContent> _view;
	UIAction* _defaultAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultAction;
-(id)contextMenuConfiguration;
-(unsigned long long)preferredContextMenuLayout;
-(id)_defaultAction;
-(id)_defaultDDAction;
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(id)actionSheetTitle;
@end

