/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NFCTag.h>

@protocol NFCTag <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@required
-(unsigned long long)type;
-(id<NFCReaderSession>)session;
-(BOOL)isAvailable;
-(id)asNFCISO15693Tag;
-(id)asNFCISO7816Tag;
-(id)asNFCFeliCaTag;
-(id)asNFCMiFareTag;

@end

#import <libobjc.A.dylib/NFCNDEFTag.h>

@protocol NFTag, OS_dispatch_queue;
@class NSNumber, NSObject, NSString;

@interface NFCTag : NSObject <NFCTag, NFCNDEFTag> {

	id<NFTag> _tag;
	NSNumber* _sessionKey;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	long long _configuration;

}

@property (nonatomic,readonly) long long configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)_MaxRetry;
+(double)_MaxRetryInterval;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(unsigned long long)capacity;
-(void)disconnect;
-(id<NFCReaderSession>)session;
-(BOOL)isAvailable;
-(long long)configuration;
-(void)_setDelegateQueue:(id)arg1 ;
-(BOOL)isReadOnly;
-(id)applicationData;
-(BOOL)isEqualToNFTag:(id)arg1 ;
-(id)selectedAID;
-(id)systemCode;
-(id)historicalBytes;
-(void)_setSession:(id)arg1 ;
-(void)_connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispatchOnDelegateQueueAsync:(/*^block*/id)arg1 ;
-(void)_transceiveWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)asNFCISO15693Tag;
-(id)asNFCISO7816Tag;
-(id)asNFCFeliCaTag;
-(id)asNFCMiFareTag;
-(void)queryNDEFStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readNDEFWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeNDEF:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeLockWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3 ;
-(void)_sendAPDU:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_getInternalReaderSession;
-(BOOL)_transceiveWithSession:(id)arg1 sendData:(id)arg2 receivedData:(id*)arg3 error:(id*)arg4 ;
-(void)_setTag:(id)arg1 ;
-(id)_translateNFCDError:(id)arg1 ;
-(BOOL)_connectWithSession:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_disconnectWithError:(id*)arg1 ;
-(BOOL)isNDEFFormatted;
-(BOOL)proprietaryApplicationDataCoding;
-(BOOL)isMatchingSession:(id)arg1 outError:(id*)arg2 ;
@end

