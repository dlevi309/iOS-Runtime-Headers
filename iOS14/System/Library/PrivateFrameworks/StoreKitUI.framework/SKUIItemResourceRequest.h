/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUIItemRequestDelegate;
@class NSString, NSArray;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying> {

	id<SKUIItemRequestDelegate> _delegate;
	NSString* _imageProfile;
	NSArray* _itemIdentifiers;
	NSString* _keyProfile;

}

@property (assign,nonatomic,__weak) id<SKUIItemRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                  //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
-(NSString *)imageProfile;
-(NSArray *)itemIdentifiers;
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id<SKUIItemRequestDelegate>)delegate;
-(void)setDelegate:(id<SKUIItemRequestDelegate>)arg1 ;
-(void)setImageProfile:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
@end

