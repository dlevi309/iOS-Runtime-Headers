/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKit/UICollectionViewDataSource.h>

@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {

	 onlineParticipants;
	 offlineParticipants;
	 participantIsShownInGrid;
	 didCreateCellForParticipant;

}
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)init;
@end

