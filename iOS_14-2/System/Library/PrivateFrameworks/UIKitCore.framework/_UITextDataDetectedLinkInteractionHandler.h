/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(id)defaultAction;
-(id)_defaultDDAction;
-(id)actionSheetTitle;
-(id)_defaultAction;
-(id)contextMenuConfiguration;
-(unsigned long long)preferredContextMenuLayout;
@end

