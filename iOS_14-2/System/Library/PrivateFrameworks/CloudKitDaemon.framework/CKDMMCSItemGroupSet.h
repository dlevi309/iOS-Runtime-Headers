/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableDictionary, NSError;

@interface CKDMMCSItemGroupSet : NSObject {

	NSMutableDictionary* _itemsByGroupTuple;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByGroupTuple;              //@synthesize itemsByGroupTuple=_itemsByGroupTuple - In the implementation block
@property (nonatomic,readonly) NSError * error; 
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)init;
-(id)CKPropertiesDescription;
-(NSError *)error;
-(id)description;
-(id)allItemGroups;
-(NSMutableDictionary *)itemsByGroupTuple;
-(void)setItemsByGroupTuple:(NSMutableDictionary *)arg1 ;
@end

