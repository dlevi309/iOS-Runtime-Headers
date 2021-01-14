/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSData;

@interface ICFPStreamContext : NSObject {

	FPStreamOpaque_Ref _fpStreamRef;
	unsigned long long _accountID;
	NSData* _playerInfoContextRequestData;

}

@property (nonatomic,readonly) unsigned long long accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSData * playerInfoContextRequestData;              //@synthesize playerInfoContextRequestData=_playerInfoContextRequestData - In the implementation block
-(unsigned long long)accountID;
-(id)initWithVersion:(unsigned)arg1 contextID:(unsigned)arg2 contentInfo:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3 ;
-(NSData *)playerInfoContextRequestData;
-(void)dealloc;
@end

