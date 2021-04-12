/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSData, NSArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {

	NSMutableArray* _resultChangedNotifications;
	BOOL _wantsChanges;
	BOOL _moreComing;
	unsigned long long _resultsLimit;
	NSData* _resultServerChangeTokenData;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * resultServerChangeTokenData;                //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                     //@synthesize moreComing=_moreComing - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                     //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                   //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,readonly) NSArray * resultChangedNotifications;              //@synthesize resultChangedNotifications=_resultChangedNotifications - In the implementation block
-(int)operationType;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(NSData *)serverChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)resultChangedNotifications;
-(id)initWithServerChangeTokenData:(id)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

