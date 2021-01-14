/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UIUpdateItem, NSArray;

@interface UITableViewUpdateGap : NSObject {

	NSMutableArray* _deleteItems;
	NSMutableArray* _insertItems;
	SCD_Struct_UI34 _gapFlags;
	UIUpdateItem* _firstUpdateItem;
	UIUpdateItem* _lastUpdateItem;

}

@property (nonatomic,retain) UIUpdateItem * firstUpdateItem;                 //@synthesize firstUpdateItem=_firstUpdateItem - In the implementation block
@property (nonatomic,retain) UIUpdateItem * lastUpdateItem;                  //@synthesize lastUpdateItem=_lastUpdateItem - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems; 
@property (nonatomic,readonly) NSArray * deleteItems;                        //@synthesize deleteItems=_deleteItems - In the implementation block
@property (nonatomic,readonly) NSArray * insertItems;                        //@synthesize insertItems=_insertItems - In the implementation block
@property (nonatomic,readonly) BOOL isDeleteBasedGap; 
@property (nonatomic,readonly) BOOL hasInserts; 
@property (nonatomic,readonly) BOOL isSectionBasedGap; 
@property (nonatomic,readonly) BOOL hasAutomaticAnimationItems; 
+(id)gapWithUpdateItem:(id)arg1 ;
-(NSArray *)updateItems;
-(BOOL)hasInserts;
-(id)init;
-(void)setFirstUpdateItem:(UIUpdateItem *)arg1 ;
-(UIUpdateItem *)lastUpdateItem;
-(BOOL)hasAutomaticAnimationItems;
-(void)setLastUpdateItem:(UIUpdateItem *)arg1 ;
-(NSArray *)deleteItems;
-(BOOL)isSectionBasedGap;
-(id)description;
-(NSArray *)insertItems;
-(void)addUpdateItem:(id)arg1 ;
-(UIUpdateItem *)firstUpdateItem;
-(BOOL)isDeleteBasedGap;
@end

