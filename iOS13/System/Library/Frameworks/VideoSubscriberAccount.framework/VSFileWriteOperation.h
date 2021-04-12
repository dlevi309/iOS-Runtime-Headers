/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSError;

@interface VSFileWriteOperation : VSAsyncOperation {

	VSOptional* _data;
	VSOptional* _destination;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSOptional * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) VSOptional * destination;              //@synthesize destination=_destination - In the implementation block
-(id)init;
-(VSOptional *)data;
-(NSError *)error;
-(void)setData:(VSOptional *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(VSOptional *)destination;
-(void)setDestination:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

