/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)frameOptions;
-(void)setPb:(CVBufferRef)arg1 ;
-(void)setFrameOptions:(NSDictionary *)arg1 ;
@end

