/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(void)setWantsChanges:(BOOL)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)generateRequestOperations;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSData *)serverChangeTokenData;
-(unsigned long long)resultsLimit;
-(NSArray *)resultChangedNotifications;
-(id)initWithOperation:(id)arg1 serverChangeTokenData:(id)arg2 ;
-(NSData *)resultServerChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
@end

