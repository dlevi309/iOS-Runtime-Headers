/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)accountID;
-(unsigned)mediaKind;
-(id)leaseID;
-(id)_initWithFPLeaseSync:(FPLeaseSyncOpaque_Ref)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(FairPlayHWInfo_)arg4 mediaKind:(unsigned)arg5 ;
-(BOOL)endLeaseSyncAndReturnError:(id*)arg1 ;
-(BOOL)getLeaseSyncRenewRequestData:(id*)arg1 error:(id*)arg2 ;
-(BOOL)importLeaseSyncResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)processRenewResponseData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

