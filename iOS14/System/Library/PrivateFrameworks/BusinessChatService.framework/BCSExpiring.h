/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class NSDate;


@protocol BCSExpiring <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@required
-(NSDate *)expirationDate;
-(BOOL)isExpired;

@end

