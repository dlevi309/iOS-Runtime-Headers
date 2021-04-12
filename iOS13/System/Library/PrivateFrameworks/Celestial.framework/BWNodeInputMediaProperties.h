/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(BWVideoFormat *)resolvedVideoFormat;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)liveFormat;
-(void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(BWFormat *)resolvedFormat;
-(id)resolvedPointCloudFormat;
-(id)liveFormatFormat;
-(BWVideoFormat *)liveVideoFormat;
@end

