/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject {

	CSSearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CSSearchableIndex *)searchableIndex;
-(void)deleteInteractionsWithChatGUIDs:(id)arg1 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg1 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
@end

