/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)feedbackType;
-(NSDictionary *)info;
-(id)initWithInfo:(id)arg1 ;
-(id)serverMessage;
@end

