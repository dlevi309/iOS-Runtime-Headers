/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSDate, NSString, CPLServerFeedbackMessage;

@interface CPLFeedbackMessage : NSObject {

	NSDate* _creationDate;
	NSString* _feedbackType;

}

@property (nonatomic,readonly) NSString * feedbackType;                               //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) CPLServerFeedbackMessage * serverMessage; 
+(id)feedbackType;
-(id)init;
-(NSString *)feedbackType;
-(CPLServerFeedbackMessage *)serverMessage;
@end

