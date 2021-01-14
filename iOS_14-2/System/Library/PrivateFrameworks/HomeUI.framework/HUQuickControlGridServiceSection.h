/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFServiceItem, NSMutableArray;

@interface HUQuickControlGridServiceSection : NSObject {

	HFServiceItem* _serviceItem;
	NSMutableArray* _gridControlItems;
	NSMutableArray* _supplementaryControlItems;

}

@property (nonatomic,retain) HFServiceItem * serviceItem;                             //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * gridControlItems;                       //@synthesize gridControlItems=_gridControlItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * supplementaryControlItems;              //@synthesize supplementaryControlItems=_supplementaryControlItems - In the implementation block
-(id)init;
-(HFServiceItem *)serviceItem;
-(void)setServiceItem:(HFServiceItem *)arg1 ;
-(NSMutableArray *)supplementaryControlItems;
-(NSMutableArray *)gridControlItems;
-(void)setGridControlItems:(NSMutableArray *)arg1 ;
-(void)setSupplementaryControlItems:(NSMutableArray *)arg1 ;
@end

