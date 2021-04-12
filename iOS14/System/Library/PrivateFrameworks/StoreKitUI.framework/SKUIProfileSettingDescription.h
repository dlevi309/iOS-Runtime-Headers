/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class NSString, NSOperationQueue, UIImage;

@interface SKUIProfileSettingDescription : SKUISettingDescription {

	NSString* _handle;
	NSString* _name;
	NSOperationQueue* _operationQueue;
	UIImage* _photo;

}

@property (nonatomic,readonly) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * photo;                //@synthesize photo=_photo - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(UIImage *)photo;
-(NSString *)handle;
-(NSString *)name;
-(void)reloadData;
-(void)dealloc;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
@end

