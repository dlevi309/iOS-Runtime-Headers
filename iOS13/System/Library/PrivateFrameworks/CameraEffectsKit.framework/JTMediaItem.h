/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol JTMediaItemDelegate;
@interface JTMediaItem : NSObject <NSCopying> {

	int _mediaType;
	int _mediaState;
	int _mediaLoadState;
	int _durationAt30fps;
	long long _captureInterfaceOrientation;
	id<JTMediaItemDelegate> _delegate;

}

@property (assign,nonatomic) int mediaType;                                        //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int mediaState;                                       //@synthesize mediaState=_mediaState - In the implementation block
@property (assign,nonatomic) int mediaLoadState;                                   //@synthesize mediaLoadState=_mediaLoadState - In the implementation block
@property (assign,nonatomic) int durationAt30fps;                                  //@synthesize durationAt30fps=_durationAt30fps - In the implementation block
@property (assign,nonatomic) long long captureInterfaceOrientation;                //@synthesize captureInterfaceOrientation=_captureInterfaceOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<JTMediaItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<JTMediaItemDelegate>)delegate;
-(void)setDelegate:(id<JTMediaItemDelegate>)arg1 ;
-(id)info;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(long long)captureInterfaceOrientation;
-(int)durationAt30fps;
-(int)mediaState;
-(int)mediaLoadState;
-(BOOL)canSaveToCameraRoll;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(BOOL)hasAudibleCharacteristic;
-(void)setCaptureInterfaceOrientation:(long long)arg1 ;
-(BOOL)canBeAddedToSequence;
-(BOOL)canHaveFilter;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(void)setMediaState:(int)arg1 ;
-(void)setMediaLoadState:(int)arg1 ;
-(void)setDurationAt30fps:(int)arg1 ;
@end

