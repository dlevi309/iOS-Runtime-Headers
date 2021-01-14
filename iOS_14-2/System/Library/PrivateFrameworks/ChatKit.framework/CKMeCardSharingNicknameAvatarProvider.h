/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarProvider.h>

@class NSData, NSString;

@interface CKMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {

	NSData* _imageData;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageData:(id)arg1 ;
-(void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(/*^block*/id)arg2 ;
-(NSData *)imageData;
@end

