/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFullscreenCaptionViewFactory.h>

@protocol SXFullscreenCaptionViewFactory <NSObject>
@required
-(id)createCaptionView;

@end


@protocol SXTextSourceFactory, SXComponentActionHandler;
@class NSString;

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory> {

	id<SXTextSourceFactory> _textSourceFactory;
	id<SXComponentActionHandler> _actionHandler;

}

@property (nonatomic,readonly) id<SXTextSourceFactory> textSourceFactory;               //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentActionHandler>)actionHandler;
-(id<SXTextSourceFactory>)textSourceFactory;
-(id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2 ;
-(id)createCaptionView;
@end

