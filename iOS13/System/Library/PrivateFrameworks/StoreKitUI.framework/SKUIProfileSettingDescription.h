/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)name;
-(NSString *)handle;
-(void)reloadData;
-(UIImage *)photo;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
@end

