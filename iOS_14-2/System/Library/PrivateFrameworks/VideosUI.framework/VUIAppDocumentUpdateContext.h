/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

