/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest {

	BOOL _wantsProtectionInfo;
	/*^block*/id _progressBlock;
	NSArray* _infosToDiscover;
	NSMutableDictionary* _submittedInfos;

}

@property (nonatomic,retain) NSArray * infosToDiscover;                         //@synthesize infosToDiscover=_infosToDiscover - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedInfos;              //@synthesize submittedInfos=_submittedInfos - In the implementation block
@property (assign,nonatomic) BOOL wantsProtectionInfo;                          //@synthesize wantsProtectionInfo=_wantsProtectionInfo - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
-(void)setProgressBlock:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)progressBlock;
-(id)generateRequestOperations;
-(long long)databaseScope;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)initWithOperation:(id)arg1 lookupInfos:(id)arg2 ;
-(NSArray *)infosToDiscover;
-(BOOL)wantsProtectionInfo;
-(void)setWantsProtectionInfo:(BOOL)arg1 ;
-(void)setInfosToDiscover:(NSArray *)arg1 ;
-(NSMutableDictionary *)submittedInfos;
-(void)setSubmittedInfos:(NSMutableDictionary *)arg1 ;
@end

