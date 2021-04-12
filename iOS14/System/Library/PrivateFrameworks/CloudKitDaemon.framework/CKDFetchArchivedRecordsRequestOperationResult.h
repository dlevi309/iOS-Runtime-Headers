/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

