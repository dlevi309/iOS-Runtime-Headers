/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, BWNodeInput, BWFormat, BWVideoFormat;

@interface BWNodeInputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeInput* _owningNodeInput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;

}

@property (nonatomic,retain) BWFormat * resolvedFormat; 
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat;                            //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(BWFormat *)liveFormat;
-(void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(id)liveFormatFormat;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(id)resolvedPointCloudFormat;
-(BWVideoFormat *)resolvedVideoFormat;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)resolvedFormat;
-(BWVideoFormat *)liveVideoFormat;
-(void)dealloc;
@end

