/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCModifyRecordsCommand.h>

@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand {

	NSArray* _historyItems;
	NSArray* _recordItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems;              //@synthesize historyItems=_historyItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recordItems;               //@synthesize recordItems=_recordItems - In the implementation block
+(id)desiredKeys;
-(id)recordZoneName;
-(id)initWithHistoryItems:(id)arg1 merge:(BOOL)arg2 ;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
-(NSArray *)historyItems;
-(NSArray *)recordItems;
@end

