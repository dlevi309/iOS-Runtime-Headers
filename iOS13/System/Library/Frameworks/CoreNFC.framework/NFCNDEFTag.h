/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NFCNDEFTag.h>

@protocol NFTag, OS_dispatch_queue;
@class NSNumber, NSObject, NSString;

@interface NFCNDEFTag : NSObject <NFCNDEFTag> {

	id<NFTag> _tag;
	NSNumber* _sessionKey;
	BOOL _writeLocked;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAvailable;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)_setSession:(id)arg1 ;
-(void)_connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryNDEFStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readNDEFWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeNDEF:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeLockWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3 ;
-(id)_getInternalReaderSession;
-(void)_setTag:(id)arg1 ;
-(BOOL)_disconnectWithError:(id*)arg1 ;
-(BOOL)isMatchingSession:(id)arg1 outError:(id*)arg2 ;
-(void)dispatchBlockOnDelegateQueueAsync:(/*^block*/id)arg1 ;
-(BOOL)_connectWithError:(id*)arg1 ;
@end

