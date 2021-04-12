/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainer.h>

@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer {

	MSPContainer* _itemContainer;

}

@property (nonatomic,retain) MSPContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
+(id)sharedRemoteContainer;
+(id)sharedLocalContainer;
-(id)initWithPersister:(id)arg1 itemContainer:(id)arg2 ;
-(MSPContainer *)itemContainer;
-(void)setItemContainer:(MSPContainer *)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
@end

