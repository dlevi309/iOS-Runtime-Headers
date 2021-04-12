/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSDate;


@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property (nonatomic,readonly) long long statusType; 
@property (nonatomic,readonly) long long expireStatusType; 
@property (nonatomic,readonly) NSDate * dateOfStatus; 
@required
-(long long)statusType;
-(long long)expireStatusType;
-(NSDate *)dateOfStatus;

@end

