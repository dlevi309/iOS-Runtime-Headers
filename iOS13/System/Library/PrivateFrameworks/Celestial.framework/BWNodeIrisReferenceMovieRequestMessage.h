/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {

	BWIrisMovieInfo* _irisMovieInfo;

}

@property (readonly) BWIrisMovieInfo * irisMovieInfo; 
+(id)newMessageWithIrisMovieInfo:(id)arg1 ;
-(void)dealloc;
-(BWIrisMovieInfo *)irisMovieInfo;
-(id)_initWithIrisMovieInfo:(id)arg1 ;
@end

