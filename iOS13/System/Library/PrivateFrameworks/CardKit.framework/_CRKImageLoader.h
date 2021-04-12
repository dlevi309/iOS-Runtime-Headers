/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol _CRKImageLoaderDelegate;
@class INUIImageLoader, NSString;

@interface _CRKImageLoader : NSObject <SFResourceLoader> {

	INUIImageLoader* _imageLoader;
	BOOL _active;
	id<_CRKImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceWithInitialDelegate:(id)arg1 ;
-(id<_CRKImageLoaderDelegate>)delegate;
-(void)setDelegate:(id<_CRKImageLoaderDelegate>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundaton;
-(id)resourceIdentifierForLocalImageType:(int)arg1 ;
-(void)_loadSFImageForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

