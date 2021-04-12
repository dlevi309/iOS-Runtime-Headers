/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class IKUpdateServiceRequest;


@protocol VUIAppDocumentUpdateContext <NSObject>
@property (nonatomic,readonly) IKUpdateServiceRequest * currentUpdateRequest; 
@required
-(void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
-(IKUpdateServiceRequest *)currentUpdateRequest;

@end

