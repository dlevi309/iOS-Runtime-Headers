/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {

	BWNodeError* _nodeError;

}

@property (readonly) BWNodeError * nodeError; 
+(id)newMessageWithNodeError:(id)arg1 ;
-(BWNodeError *)nodeError;
-(id)_initWithNodeError:(id)arg1 ;
-(void)dealloc;
@end

