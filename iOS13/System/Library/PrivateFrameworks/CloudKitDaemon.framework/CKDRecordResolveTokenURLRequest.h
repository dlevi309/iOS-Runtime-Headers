/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSSet, NSArray, NSMutableDictionary;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest {

	BOOL _shouldFetchRootRecord;
	NSSet* _rootRecordDesiredKeySet;
	/*^block*/id _tokenResolveBlock;
	NSArray* _lookupInfos;
	NSMutableDictionary* _lookupInfosByRequestID;

}

@property (nonatomic,retain) NSArray * lookupInfos;                                     //@synthesize lookupInfos=_lookupInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lookupInfosByRequestID;              //@synthesize lookupInfosByRequestID=_lookupInfosByRequestID - In the implementation block
@property (nonatomic,retain) NSSet * rootRecordDesiredKeySet;                           //@synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,copy) id tokenResolveBlock;                                        //@synthesize tokenResolveBlock=_tokenResolveBlock - In the implementation block
-(int)operationType;
-(id)sourceApplicationBundleIdentifier;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithShortTokenLookupInfos:(id)arg1 ;
-(void)setRootRecordDesiredKeySet:(NSSet *)arg1 ;
-(void)setTokenResolveBlock:(id)arg1 ;
-(NSArray *)lookupInfos;
-(NSSet *)rootRecordDesiredKeySet;
-(NSMutableDictionary *)lookupInfosByRequestID;
-(id)tokenResolveBlock;
-(void)setLookupInfos:(NSArray *)arg1 ;
-(void)setLookupInfosByRequestID:(NSMutableDictionary *)arg1 ;
@end

