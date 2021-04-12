/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject {

	CSSearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(CSSearchableIndex *)searchableIndex;
-(void)deleteInteractionsWithChatGUIDs:(id)arg1 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg1 ;
-(void)dealloc;
@end

