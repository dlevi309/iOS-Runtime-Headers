/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUISortDataRequestDelegate;
@class NSURL;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying> {

	id<SKUISortDataRequestDelegate> _delegate;
	NSURL* _sortURL;

}

@property (nonatomic,readonly) NSURL * sortURL;                                            //@synthesize sortURL=_sortURL - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISortDataRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SKUISortDataRequestDelegate>)delegate;
-(void)setDelegate:(id<SKUISortDataRequestDelegate>)arg1 ;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)initWithSortURL:(id)arg1 ;
-(NSURL *)sortURL;
@end

