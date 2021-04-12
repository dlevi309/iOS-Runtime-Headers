/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPLeaseSyncSession : NSObject {

	FPLeaseSyncOpaque_Ref _fpLeaseSync;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned _mediaKind;
	unsigned long long _accountID;
	id _leaseID;

}

@property (nonatomic,readonly) unsigned long long accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) id leaseID;                                //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) unsigned mediaKind;                        //@synthesize mediaKind=_mediaKind - In the implementation block
+(id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned)arg3 returningLeaseSyncRequestData:(id*)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(unsigned long long)accountID;
-(unsigned)mediaKind;
-(id)_initWithFPLeaseSync:(FPLeaseSyncOpaque_Ref)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(FairPlayHWInfo_)arg4 mediaKind:(unsigned)arg5 ;
-(BOOL)endLeaseSyncAndReturnError:(id*)arg1 ;
-(BOOL)getLeaseSyncRenewRequestData:(id*)arg1 error:(id*)arg2 ;
-(BOOL)importLeaseSyncResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)processRenewResponseData:(id)arg1 error:(id*)arg2 ;
-(id)leaseID;
@end

