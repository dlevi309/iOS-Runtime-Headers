/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

