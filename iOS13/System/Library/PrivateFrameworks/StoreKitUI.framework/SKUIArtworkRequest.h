/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUIArtworkRequestDelegate;
@class SSVURLDataConsumer, NSString, NSURL;

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {

	SSVURLDataConsumer* _dataConsumer;
	id<SKUIArtworkRequestDelegate> _delegate;
	NSString* _imageName;
	NSURL* _url;

}

@property (nonatomic,retain) SSVURLDataConsumer * dataConsumer;                           //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIArtworkRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                          //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                   //@synthesize url=_url - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SKUIArtworkRequestDelegate>)delegate;
-(void)setDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(SSVURLDataConsumer *)dataConsumer;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
@end

