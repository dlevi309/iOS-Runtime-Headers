/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SKUIArtworkRequestDelegate>)delegate;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)setDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(id)description;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVURLDataConsumer *)dataConsumer;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
@end

