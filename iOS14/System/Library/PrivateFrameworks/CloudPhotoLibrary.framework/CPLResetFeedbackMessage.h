/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLResetFeedbackMessage : CPLFeedbackMessage {

	NSString* _resetType;
	NSString* _reason;
	NSString* _uuid;

}

@property (nonatomic,readonly) NSString * resetType;              //@synthesize resetType=_resetType - In the implementation block
@property (nonatomic,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
+(id)feedbackType;
-(NSString *)uuid;
-(NSString *)reason;
-(id)serverMessage;
-(id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(NSString *)resetType;
@end

