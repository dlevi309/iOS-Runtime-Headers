/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {

	BWNodeError* _nodeError;

}

@property (readonly) BWNodeError * nodeError; 
+(id)newMessageWithNodeError:(id)arg1 ;
-(void)dealloc;
-(BWNodeError *)nodeError;
-(id)_initWithNodeError:(id)arg1 ;
@end
