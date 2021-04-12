/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject {

	FLFollowUpItem* _item;

}

@property (nonatomic,retain) FLFollowUpItem * item;              //@synthesize item=_item - In the implementation block
+(id)handlerWithItem:(id)arg1 ;
-(FLFollowUpItem *)item;
-(void)setItem:(FLFollowUpItem *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAction:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

