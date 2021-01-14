/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCModifyRecordsCommand : FCCommand {

	BOOL _merge;
	/*^block*/id _localRecordsGenerator;
	NSArray* _localRecords;

}

@property (nonatomic,copy) id localRecordsGenerator;                  //@synthesize localRecordsGenerator=_localRecordsGenerator - In the implementation block
@property (nonatomic,copy) NSArray * localRecords;                    //@synthesize localRecords=_localRecords - In the implementation block
@property (assign,nonatomic) BOOL merge;                              //@synthesize merge=_merge - In the implementation block
@property (nonatomic,readonly) NSArray * t_localRecords; 
+(BOOL)supportsSecureCoding;
+(id)desiredKeys;
-(id)init;
-(id)initWithLocalRecords:(id)arg1 merge:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(BOOL)merge;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
-(void)setMerge:(BOOL)arg1 ;
-(id)initWithLocalRecordsGenerator:(/*^block*/id)arg1 merge:(BOOL)arg2 ;
-(NSArray *)localRecords;
-(id)localRecordsGenerator;
-(void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4 ;
-(void)setLocalRecords:(NSArray *)arg1 ;
-(void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)t_localRecords;
-(void)setLocalRecordsGenerator:(id)arg1 ;
@end

