/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSArray, NSDate;

@interface WFCachedDonations : NSObject {

	NSArray* _donations;
	NSDate* _fetchDate;
	unsigned long long _ballpark;

}

@property (nonatomic,readonly) NSArray * donations;                      //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) NSDate * fetchDate;                       //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,readonly) unsigned long long ballpark;              //@synthesize ballpark=_ballpark - In the implementation block
-(NSDate *)fetchDate;
-(id)initWithDonations:(id)arg1 ballpark:(unsigned long long)arg2 ;
-(BOOL)isValidWithBallpark:(unsigned long long)arg1 ;
-(NSArray *)donations;
-(unsigned long long)ballpark;
@end

