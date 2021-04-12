/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/SFResourceLoader.h>
#import <libobjc.A.dylib/INImageLoading.h>

@protocol INUIImageLoaderDelegate;
@class NSString;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading> {

	id<INUIImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUIImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(id)registeredImageLoaderWithScreenDelegate;
-(void)dealloc;
-(id<INUIImageLoaderDelegate>)delegate;
-(void)setDelegate:(id<INUIImageLoaderDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN1)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerWithIntents;
-(void)registerWithSearchFoundation;
-(void)deregisterWithSearchFoundation;
-(void)deregisterWithIntents;
@end

