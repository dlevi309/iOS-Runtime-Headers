/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

@class WKFrameInfo;


@protocol WKURLSchemeTaskPrivate <WKURLSchemeTask>
@property (nonatomic,readonly) BOOL _requestOnlyIfCached; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@required
-(WKFrameInfo *)_frame;
-(void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;
-(BOOL)_requestOnlyIfCached;

@end

