/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKInitiateParticipantVettingOperationCallbacks.h>

@class CKShareMetadata, NSString, CKInitiateParticipantVettingOperationInfo;

@interface CKInitiateParticipantVettingOperation : CKOperation <CKInitiateParticipantVettingOperationCallbacks> {

	/*^block*/id _participantVettingInitiatedBlock;
	/*^block*/id _participantVettingInitiationCompletionBlock;
	CKShareMetadata* _shareMetadata;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,copy) CKShareMetadata * shareMetadata;                                                                  //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                                                         //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * address;                                                                               //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) id<CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKInitiateParticipantVettingOperationInfo * operationInfo; 
@property (nonatomic,copy) id participantVettingInitiatedBlock;                                                              //@synthesize participantVettingInitiatedBlock=_participantVettingInitiatedBlock - In the implementation block
@property (nonatomic,copy) id participantVettingInitiationCompletionBlock;                                                   //@synthesize participantVettingInitiationCompletionBlock=_participantVettingInitiationCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(/*^block*/id)arg3 participantVettingInitiationCompletionBlock:(/*^block*/id)arg4 ;
-(void)performCKOperation;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(void)setParticipantVettingInitiatedBlock:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3 ;
-(void)setParticipantVettingInitiationCompletionBlock:(id)arg1 ;
-(id)participantVettingInitiatedBlock;
-(id)participantVettingInitiationCompletionBlock;
-(void)handleParticipantVettingProgressWithError:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(CKShareMetadata *)shareMetadata;
@end

