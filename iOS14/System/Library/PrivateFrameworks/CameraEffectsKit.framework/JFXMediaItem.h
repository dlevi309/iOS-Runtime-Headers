/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol JFXMediaItemDelegate;
@class PVColorSpace;

@interface JFXMediaItem : NSObject <NSCopying> {

	int _durationAt30fps;
	long long _mediaType;
	long long _mediaState;
	long long _mediaLoadState;
	long long _interfaceOrientationForDisplay;
	id<JFXMediaItemDelegate> _delegate;

}

@property (assign,nonatomic) long long mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long mediaState;                                  //@synthesize mediaState=_mediaState - In the implementation block
@property (assign,nonatomic) long long mediaLoadState;                              //@synthesize mediaLoadState=_mediaLoadState - In the implementation block
@property (assign,nonatomic) int durationAt30fps;                                   //@synthesize durationAt30fps=_durationAt30fps - In the implementation block
@property (assign,nonatomic) long long interfaceOrientationForDisplay;              //@synthesize interfaceOrientationForDisplay=_interfaceOrientationForDisplay - In the implementation block
@property (nonatomic,readonly) PVColorSpace * colorSpace; 
@property (assign,nonatomic,__weak) id<JFXMediaItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(PVColorSpace *)colorSpace;
-(void)setMediaType:(long long)arg1 ;
-(id)info;
-(long long)mediaType;
-(id)init;
-(id<JFXMediaItemDelegate>)delegate;
-(void)setDelegate:(id<JFXMediaItemDelegate>)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setMediaState:(long long)arg1 ;
-(BOOL)hasAudibleCharacteristic;
-(long long)interfaceOrientationForDisplay;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canSaveToCameraRoll;
-(int)durationAt30fps;
-(BOOL)canBeAddedToSequence;
-(BOOL)canHaveFilter;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(long long)mediaState;
-(long long)mediaLoadState;
-(void)setMediaLoadState:(long long)arg1 ;
-(void)setDurationAt30fps:(int)arg1 ;
-(void)setInterfaceOrientationForDisplay:(long long)arg1 ;
@end

