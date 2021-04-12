/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSData;

@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject {

	NSData* _resultServerChangeTokenData;
	long long _status;

}

@property (nonatomic,retain) NSData * resultServerChangeTokenData;              //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

