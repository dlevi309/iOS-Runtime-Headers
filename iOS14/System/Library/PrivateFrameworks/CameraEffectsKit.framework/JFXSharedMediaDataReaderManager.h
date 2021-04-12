/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXPlayableElement;
@class JFXARMetadataMediaReader, JFXDepthDataMediaReader;

@interface JFXSharedMediaDataReaderManager : NSObject {

	id<JFXPlayableElement> _playableElement;
	JFXARMetadataMediaReader* _weakSharedARMetadataReader;
	JFXDepthDataMediaReader* _weakSharedDepthDataReader;

}

@property (nonatomic,retain) id<JFXPlayableElement> playableElement;                                    //@synthesize playableElement=_playableElement - In the implementation block
@property (assign,nonatomic,__weak) JFXARMetadataMediaReader * weakSharedARMetadataReader;              //@synthesize weakSharedARMetadataReader=_weakSharedARMetadataReader - In the implementation block
@property (assign,nonatomic,__weak) JFXDepthDataMediaReader * weakSharedDepthDataReader;                //@synthesize weakSharedDepthDataReader=_weakSharedDepthDataReader - In the implementation block
@property (nonatomic,readonly) JFXARMetadataMediaReader * sharedARMetadataReader; 
@property (nonatomic,readonly) JFXDepthDataMediaReader * sharedDepthDataReader; 
-(id<JFXPlayableElement>)playableElement;
-(JFXARMetadataMediaReader *)sharedARMetadataReader;
-(id)initWithPlayableElement:(id)arg1 ;
-(JFXARMetadataMediaReader *)weakSharedARMetadataReader;
-(void)setWeakSharedARMetadataReader:(JFXARMetadataMediaReader *)arg1 ;
-(JFXDepthDataMediaReader *)weakSharedDepthDataReader;
-(void)setWeakSharedDepthDataReader:(JFXDepthDataMediaReader *)arg1 ;
-(JFXDepthDataMediaReader *)sharedDepthDataReader;
-(void)setPlayableElement:(id<JFXPlayableElement>)arg1 ;
@end

