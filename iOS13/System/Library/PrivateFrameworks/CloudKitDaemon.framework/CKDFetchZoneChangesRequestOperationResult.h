/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSData;

@interface CKDFetchZoneChangesRequestOperationResult : NSObject {

	BOOL _hasPendingArchivedRecords;
	NSData* _resultServerChangeTokenData;
	NSData* _resultClientChangeTokenData;
	long long _status;

}

@property (nonatomic,retain) NSData * resultServerChangeTokenData;              //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;              //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPendingArchivedRecords;                    //@synthesize hasPendingArchivedRecords=_hasPendingArchivedRecords - In the implementation block
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(NSData *)resultServerChangeTokenData;
-(void)setHasPendingArchivedRecords:(BOOL)arg1 ;
-(BOOL)hasPendingArchivedRecords;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

