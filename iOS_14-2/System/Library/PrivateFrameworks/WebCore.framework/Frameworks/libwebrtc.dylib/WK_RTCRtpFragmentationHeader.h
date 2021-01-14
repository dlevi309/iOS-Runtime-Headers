/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSArray;

@interface WK_RTCRtpFragmentationHeader : NSObject {

	NSArray* _fragmentationOffset;
	NSArray* _fragmentationLength;
	NSArray* _fragmentationTimeDiff;
	NSArray* _fragmentationPlType;

}

@property (nonatomic,retain) NSArray * fragmentationOffset;                //@synthesize fragmentationOffset=_fragmentationOffset - In the implementation block
@property (nonatomic,retain) NSArray * fragmentationLength;                //@synthesize fragmentationLength=_fragmentationLength - In the implementation block
@property (nonatomic,retain) NSArray * fragmentationTimeDiff;              //@synthesize fragmentationTimeDiff=_fragmentationTimeDiff - In the implementation block
@property (nonatomic,retain) NSArray * fragmentationPlType;                //@synthesize fragmentationPlType=_fragmentationPlType - In the implementation block
-(unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader> >*)createNativeFragmentationHeader;
-(void)setFragmentationOffset:(NSArray *)arg1 ;
-(void)setFragmentationLength:(NSArray *)arg1 ;
-(void)setFragmentationTimeDiff:(NSArray *)arg1 ;
-(void)setFragmentationPlType:(NSArray *)arg1 ;
-(NSArray *)fragmentationOffset;
-(NSArray *)fragmentationLength;
-(id)initWithNativeFragmentationHeader:(const RTPFragmentationHeader*)arg1 ;
-(NSArray *)fragmentationTimeDiff;
-(NSArray *)fragmentationPlType;
@end

