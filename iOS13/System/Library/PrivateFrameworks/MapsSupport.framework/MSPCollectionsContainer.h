/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer {

	MSPContainer* _itemContainer;

}

@property (nonatomic,retain) MSPContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(MSPContainer *)itemContainer;
-(void)setItemContainer:(MSPContainer *)arg1 ;
-(id)initWithPersister:(id)arg1 itemContainer:(id)arg2 ;
-(id)queryWithDelegate:(id)arg1 ;
@end

