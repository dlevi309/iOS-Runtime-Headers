/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSActionPickerItem.h>

@protocol BCSCodePayload;
@class NSURL, LSApplicationProxy, LSAppLink;

@interface BCSURLActionPickerItem : BCSActionPickerItem {

	NSURL* _url;
	LSApplicationProxy* _applicationProxy;
	LSAppLink* _appLink;
	id<BCSCodePayload> _codePayload;

}

@property (nonatomic,readonly) LSAppLink * appLink;                         //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,readonly) id<BCSCodePayload> codePayload;              //@synthesize codePayload=_codePayload - In the implementation block
-(void)performAction;
-(LSAppLink *)appLink;
-(id)actionURL;
-(id<BCSCodePayload>)codePayload;
-(id)targetApplicationBundleIdentifier;
-(void)performActionWithFBOptions:(id)arg1 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationProxy:(id)arg4 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 ;
@end

