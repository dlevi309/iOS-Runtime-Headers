/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<INUIImageLoaderDelegate>)delegate;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<INUIImageLoaderDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(unsigned long long)servicePriority;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN2)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)registerWithIntents;
-(void)registerWithSearchFoundation;
-(void)deregisterWithSearchFoundation;
-(void)deregisterWithIntents;
@end

