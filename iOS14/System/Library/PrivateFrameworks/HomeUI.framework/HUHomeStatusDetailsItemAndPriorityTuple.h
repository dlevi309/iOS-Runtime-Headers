/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFItem;

@interface HUHomeStatusDetailsItemAndPriorityTuple : NSObject {

	HFItem* _item;
	long long _priority;

}

@property (assign,nonatomic,__weak) HFItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long priority;                //@synthesize priority=_priority - In the implementation block
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)initWithItem:(id)arg1 priority:(long long)arg2 ;
@end

