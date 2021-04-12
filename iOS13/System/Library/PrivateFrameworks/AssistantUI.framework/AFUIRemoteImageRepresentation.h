/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)_commonInit;
-(id)initWithImageURL:(id)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
@end

