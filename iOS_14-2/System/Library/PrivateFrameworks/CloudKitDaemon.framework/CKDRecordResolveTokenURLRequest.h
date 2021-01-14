/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)applicationBundleIdentifierForContainerAccess;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)initWithOperation:(id)arg1 shortTokenLookupInfos:(id)arg2 ;
-(void)setRootRecordDesiredKeySet:(NSSet *)arg1 ;
-(void)setTokenResolveBlock:(id)arg1 ;
-(NSArray *)lookupInfos;
-(NSSet *)rootRecordDesiredKeySet;
-(NSMutableDictionary *)lookupInfosByRequestID;
-(id)tokenResolveBlock;
-(void)setLookupInfos:(NSArray *)arg1 ;
-(void)setLookupInfosByRequestID:(NSMutableDictionary *)arg1 ;
@end

