/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUVideoPlaybackFrameResult.h>

@class NSString;

@interface _NUVideoPlaybackFrameRequestResponse : _NURenderResult <NUVideoPlaybackFrameResult> {

	CVBufferRef _frame;

}

@property (retain) CVBufferRef frame;                                //@synthesize frame=_frame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)dealloc;
-(CVBufferRef)frame;
-(void)setFrame:(CVBufferRef)arg1 ;
@end

