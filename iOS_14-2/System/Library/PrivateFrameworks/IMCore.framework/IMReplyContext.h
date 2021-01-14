/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSString;


@protocol IMReplyContext
@property (nonatomic,readonly) BOOL replyIsFromMe; 
@property (nonatomic,copy,readonly) NSString * replyMessageGUID; 
@required
-(BOOL)replyIsFromMe;
-(NSString *)replyMessageGUID;

@end

