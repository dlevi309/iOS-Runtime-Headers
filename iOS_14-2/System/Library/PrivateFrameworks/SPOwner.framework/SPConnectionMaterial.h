/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDateInterval *)dateInterval;
-(NSData *)address;
-(NSData *)connectionToken;
-(NSNumber *)primaryIndex;
-(NSNumber *)secondaryIndex;
-(long long)type;

@end

