/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

@class NSData, NSDateInterval;


@protocol SPConnectionToken <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSData * commandKey; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@required
-(NSDateInterval *)dateInterval;
-(NSData *)commandKey;
-(NSData *)address;
-(NSData *)connectionToken;

@end

