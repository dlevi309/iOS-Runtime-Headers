/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

