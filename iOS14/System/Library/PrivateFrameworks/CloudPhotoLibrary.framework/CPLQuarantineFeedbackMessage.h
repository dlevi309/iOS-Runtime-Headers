/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage {

	NSString* _reason;
	Class _recordClass;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) Class recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
+(id)feedbackType;
-(NSString *)reason;
-(Class)recordClass;
-(id)serverMessage;
-(id)initWithClass:(Class)arg1 reason:(id)arg2 ;
@end

