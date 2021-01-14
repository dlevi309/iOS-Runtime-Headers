/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSActionPickerItem.h>

@protocol BCSCodePayload;
@class NSURL, LSApplicationRecord, LSAppLink;

@interface BCSURLActionPickerItem : BCSActionPickerItem {

	NSURL* _url;
	LSApplicationRecord* _applicationRecord;
	LSAppLink* _appLink;
	id<BCSCodePayload> _codePayload;

}

@property (nonatomic,readonly) LSAppLink * appLink;                         //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,readonly) id<BCSCodePayload> codePayload;              //@synthesize codePayload=_codePayload - In the implementation block
-(LSAppLink *)appLink;
-(void)performAction;
-(id)targetApplicationBundleIdentifier;
-(id)icon;
-(id)actionURL;
-(id<BCSCodePayload>)codePayload;
-(void)performActionWithFBOptions:(id)arg1 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 ;
@end

