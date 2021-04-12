/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)link;
-(id)_openAppLinkInExternalApplicationAction:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(/*^block*/id)_handlerRequiringUnlockedDevice:(/*^block*/id)arg1 ;
-(id)_openAppLinkInDefaultBrowserAction:(id)arg1 ;
-(id)defaultAction;
-(id)_openURLAction:(id)arg1 ;
-(id)_copyLinkAction:(id)arg1 ;
-(id)_titleForLink:(id)arg1 ;
-(id)contextMenuConfiguration;
-(id)_addLinkToReadingListAction:(id)arg1 ;
-(id)_shareLinkAction:(id)arg1 ;
@end

