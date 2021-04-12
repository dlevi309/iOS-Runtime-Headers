/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject {

	FLFollowUpItem* _item;

}

@property (nonatomic,retain) FLFollowUpItem * item;              //@synthesize item=_item - In the implementation block
+(id)handlerWithItem:(id)arg1 ;
-(void)dealloc;
-(FLFollowUpItem *)item;
-(void)setItem:(FLFollowUpItem *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAction:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

