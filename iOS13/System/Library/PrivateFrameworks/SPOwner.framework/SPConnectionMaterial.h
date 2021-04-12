/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

@class NSData, NSDateInterval, NSNumber;


@protocol SPConnectionMaterial <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSNumber * primaryIndex; 
@property (nonatomic,copy,readonly) NSNumber * secondaryIndex; 
@required
-(long long)type;
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)connectionToken;
-(NSNumber *)primaryIndex;
-(NSNumber *)secondaryIndex;

@end

