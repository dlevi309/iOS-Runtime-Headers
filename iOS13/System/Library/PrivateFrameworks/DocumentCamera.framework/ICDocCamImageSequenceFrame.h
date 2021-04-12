/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSDictionary;

@interface ICDocCamImageSequenceFrame : NSObject {

	CVBufferRef _pb;
	NSDictionary* _frameOptions;

}

@property (assign,nonatomic) CVBufferRef pb;                         //@synthesize pb=_pb - In the implementation block
@property (nonatomic,copy) NSDictionary * frameOptions;              //@synthesize frameOptions=_frameOptions - In the implementation block
-(CVBufferRef)pb;
-(void)setPb:(CVBufferRef)arg1 ;
-(NSDictionary *)frameOptions;
-(void)setFrameOptions:(NSDictionary *)arg1 ;
@end

