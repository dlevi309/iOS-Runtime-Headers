/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarProvider.h>

@class NSData, NSString;

@interface CKSettingsMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {

	NSData* _imageData;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageData:(id)arg1 ;
-(NSData *)imageData;
-(void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(/*^block*/id)arg2 ;
@end

