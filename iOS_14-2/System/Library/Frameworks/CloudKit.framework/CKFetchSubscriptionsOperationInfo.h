/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchAllSubscriptionsOperation;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSArray * subscriptionIDs;                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;              //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)initWithCoder:(id)arg1 ;
@end

