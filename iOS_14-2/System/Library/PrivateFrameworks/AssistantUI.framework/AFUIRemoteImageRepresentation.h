/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSURL, UIImage, NSString;

@interface AFUIRemoteImageRepresentation : NSObject <NSItemProviderWriting> {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,copy) NSURL * imageURL;                                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(void)setImageURL:(NSURL *)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
-(UIImage *)image;
-(void)_commonInit;
-(NSURL *)imageURL;
@end

