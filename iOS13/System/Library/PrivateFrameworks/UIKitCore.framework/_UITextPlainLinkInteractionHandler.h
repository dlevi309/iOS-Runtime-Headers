/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemInteractionHandler.h>

@protocol _UITextContent;
@class UIView, NSString;

@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {

	NSRange _range;
	UIView*<_UITextContent> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultAction;
-(id)contextMenuConfiguration;
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(id)link;
-(id)_openURLAction:(id)arg1 ;
-(id)_openAppLinkInExternalApplicationAction:(id)arg1 ;
-(id)_openAppLinkInDefaultBrowserAction:(id)arg1 ;
-(id)_addLinkToReadingListAction:(id)arg1 ;
-(id)_copyLinkAction:(id)arg1 ;
-(id)_shareLinkAction:(id)arg1 ;
-(id)_titleForLink:(id)arg1 ;
-(/*^block*/id)_handlerRequiringUnlockedDevice:(/*^block*/id)arg1 ;
@end

