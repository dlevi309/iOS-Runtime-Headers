/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSAttributedString, NSDate, IMServiceImpl, IMHandle;


@protocol IMChatTranscriptItem <NSObject>
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
@required
-(NSAttributedString *)transcriptText;
-(IMHandle *)handle;
-(BOOL)isFromMe;
-(IMServiceImpl *)service;
-(BOOL)wantsTail;
-(NSDate *)transcriptDate;

@end

