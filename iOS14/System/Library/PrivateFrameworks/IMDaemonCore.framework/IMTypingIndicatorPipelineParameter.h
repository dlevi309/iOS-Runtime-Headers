/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMTextMessagePipelineParameter.h>

@class NSString, NSData;

@interface IMTypingIndicatorPipelineParameter : IMTextMessagePipelineParameter {

	BOOL _isFinished;
	NSString* _balloonPluginBundleID;
	NSData* _typingIndicatorIconData;

}

@property (assign,nonatomic) BOOL isFinished;                             //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) NSString * balloonPluginBundleID;              //@synthesize balloonPluginBundleID=_balloonPluginBundleID - In the implementation block
@property (nonatomic,copy) NSData * typingIndicatorIconData;              //@synthesize typingIndicatorIconData=_typingIndicatorIconData - In the implementation block
-(BOOL)isFinished;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSString *)balloonPluginBundleID;
-(id)initWithBD:(id)arg1 idsTrustedData:(id)arg2 ;
-(void)setBalloonPluginBundleID:(NSString *)arg1 ;
-(NSData *)typingIndicatorIconData;
-(void)setTypingIndicatorIconData:(NSData *)arg1 ;
@end

