/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableDictionary, NSError;

@interface CKDMMCSItemGroupSet : NSObject {

	NSMutableDictionary* _itemsByGroupTuple;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByGroupTuple;              //@synthesize itemsByGroupTuple=_itemsByGroupTuple - In the implementation block
@property (nonatomic,readonly) NSError * error; 
-(id)init;
-(id)description;
-(NSError *)error;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)allItemGroups;
-(NSMutableDictionary *)itemsByGroupTuple;
-(void)setItemsByGroupTuple:(NSMutableDictionary *)arg1 ;
@end

