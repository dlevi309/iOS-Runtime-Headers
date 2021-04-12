/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWWebViewFactory.h>

@protocol SWWebViewFactory <NSObject>
@required
-(id)createWebViewWithWebViewConfiguration:(id)arg1 scrollSettings:(id)arg2;

@end


@class NSPointerArray, NSString;

@interface SWWebViewFactory : NSObject <SWWebViewFactory> {

	NSPointerArray* _webViews;

}

@property (nonatomic,readonly) NSPointerArray * webViews;              //@synthesize webViews=_webViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)createWebViewWithWebViewConfiguration:(id)arg1 scrollSettings:(id)arg2 ;
-(void)assignRelatedWebViewToConfiguration:(id)arg1 ;
-(NSPointerArray *)webViews;
@end

