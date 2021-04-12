/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@protocol VideosExtrasLoadingViewDelegate;
@class IKAppDocument, NSDictionary, VideosExtrasActivityIndicator, NSString;

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate> {

	IKAppDocument* _document;
	NSDictionary* _options;
	VideosExtrasActivityIndicator* _activityIndicator;
	id<VideosExtrasLoadingViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_show;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)startCountdownToVisibilityWithInterval:(double)arg1 ;
-(void)cancelCountdownToVisibility;
@end

