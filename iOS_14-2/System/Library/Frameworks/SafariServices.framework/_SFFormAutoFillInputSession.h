/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _WKFocusedElementInfo, _WKFormInputSession;
@class NSDictionary, SFFormAutoFillFrameHandle, WBSFormMetadata;

@interface _SFFormAutoFillInputSession : NSObject {

	id<_WKFocusedElementInfo> _focusedElementInfo;
	NSDictionary* _autoFillInputSessionUserObject;
	id<_WKFormInputSession> _formInputSession;
	SFFormAutoFillFrameHandle* _frameHandle;
	WBSFormMetadata* _formMetadata;

}

@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo;               //@synthesize focusedElementInfo=_focusedElementInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoFillInputSessionUserObject;              //@synthesize autoFillInputSessionUserObject=_autoFillInputSessionUserObject - In the implementation block
@property (nonatomic,readonly) id<_WKFormInputSession> formInputSession;                   //@synthesize formInputSession=_formInputSession - In the implementation block
@property (nonatomic,readonly) SFFormAutoFillFrameHandle * frameHandle;                    //@synthesize frameHandle=_frameHandle - In the implementation block
@property (nonatomic,readonly) WBSFormMetadata * formMetadata;                             //@synthesize formMetadata=_formMetadata - In the implementation block
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(id<_WKFormInputSession>)formInputSession;
-(id)_initWithFormInputSession:(id)arg1 focusedElement:(id)arg2 ;
-(void)_updateAutoFillInputSessionUserObject:(id)arg1 ;
-(id)initWithFormInputSession:(id)arg1 ;
-(id)initWithFocusedElement:(id)arg1 ;
-(id)autoFillInputSessionByReplacingInputSessionUserObject:(id)arg1 ;
-(NSDictionary *)autoFillInputSessionUserObject;
-(SFFormAutoFillFrameHandle *)frameHandle;
-(WBSFormMetadata *)formMetadata;
@end

