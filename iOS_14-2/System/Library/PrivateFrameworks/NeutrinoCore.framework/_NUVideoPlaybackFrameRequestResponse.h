/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)frame;
-(void)setFrame:(CVBufferRef)arg1 ;
-(void)dealloc;
@end

