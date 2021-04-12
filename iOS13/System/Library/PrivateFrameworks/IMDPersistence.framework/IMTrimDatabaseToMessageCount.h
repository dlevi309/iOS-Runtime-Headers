/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer {

	long long _messageCount;

}

@property (nonatomic,readonly) long long messageCount;              //@synthesize messageCount=_messageCount - In the implementation block
-(long long)messageCount;
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 messageCount:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
@end

