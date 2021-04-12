/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithHistoryItems:(id)arg1 merge:(BOOL)arg2 ;
-(id)recordZoneName;
-(NSArray *)recordItems;
-(NSArray *)historyItems;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
@end

