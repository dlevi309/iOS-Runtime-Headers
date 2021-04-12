/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation {

	/*^block*/id _modifyBadgeCompletionBlock;
	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) CKModifyBadgeOperationInfo * operationInfo; 
@property (assign,nonatomic) unsigned long long badgeValue;                             //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy) id modifyBadgeCompletionBlock;                               //@synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock - In the implementation block
-(unsigned long long)badgeValue;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(id)modifyBadgeCompletionBlock;
-(void)setModifyBadgeCompletionBlock:(id)arg1 ;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
@end

