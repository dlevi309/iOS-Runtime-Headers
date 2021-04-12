/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSObject;

@interface SUMescalSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2 ;
-(id)_newDataWithBytes:(char*)arg1 length:(unsigned)arg2 ;
@end

