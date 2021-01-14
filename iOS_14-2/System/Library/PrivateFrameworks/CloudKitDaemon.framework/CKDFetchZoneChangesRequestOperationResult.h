/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(NSData *)resultServerChangeTokenData;
-(void)setHasPendingArchivedRecords:(BOOL)arg1 ;
-(BOOL)hasPendingArchivedRecords;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

