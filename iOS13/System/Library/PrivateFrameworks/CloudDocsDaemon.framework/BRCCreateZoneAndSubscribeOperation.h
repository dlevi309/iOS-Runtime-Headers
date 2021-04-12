/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordZoneID, CKRecordZone, NSString;

@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass> {

	CKRecordZoneID* _zoneID;
	BOOL _optimisticSubscribe;
	BOOL _subscriptionOnly;
	/*^block*/id _createZoneAndSubscribeCompletionBlock;
	CKRecordZone* _createdZone;

}

@property (assign,nonatomic) BOOL subscriptionOnly;                               //@synthesize subscriptionOnly=_subscriptionOnly - In the implementation block
@property (assign,nonatomic) BOOL optimisticSubscribe;                            //@synthesize optimisticSubscribe=_optimisticSubscribe - In the implementation block
@property (nonatomic,copy) id createZoneAndSubscribeCompletionBlock;              //@synthesize createZoneAndSubscribeCompletionBlock=_createZoneAndSubscribeCompletionBlock - In the implementation block
@property (nonatomic,readonly) CKRecordZone * createdZone;                        //@synthesize createdZone=_createdZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithSession:(id)arg1 zoneID:(id)arg2 ;
-(void)setCreateZoneAndSubscribeCompletionBlock:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(void)setOptimisticSubscribe:(BOOL)arg1 ;
-(id)initWithServerZone:(id)arg1 ;
-(void)_registerSubscriptionForZoneID:(id)arg1 isOptimisticSubscribe:(BOOL)arg2 ;
-(void)_createZoneWithZoneID:(id)arg1 ;
-(BOOL)optimisticSubscribe;
-(BOOL)subscriptionOnly;
-(void)setSubscriptionOnly:(BOOL)arg1 ;
-(id)createZoneAndSubscribeCompletionBlock;
-(CKRecordZone *)createdZone;
@end

