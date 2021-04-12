/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand {

	NSArray* _recordIDs;

}

@property (nonatomic,copy) NSArray * recordIDs;              //@synthesize recordIDs=_recordIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(NSArray *)recordIDs;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4 ;
-(void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
@end

