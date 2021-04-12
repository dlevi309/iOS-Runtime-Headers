/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

@class NSData, NSDateInterval;


@protocol SPConnectionToken <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSData * commandKey; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@required
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)commandKey;
-(NSData *)connectionToken;

@end

