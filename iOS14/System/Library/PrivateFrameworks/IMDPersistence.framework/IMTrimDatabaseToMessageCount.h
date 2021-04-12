/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

