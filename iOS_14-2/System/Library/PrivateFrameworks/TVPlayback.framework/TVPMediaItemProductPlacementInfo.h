/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString, NSNumber;

@interface TVPMediaItemProductPlacementInfo : NSObject {

	NSString* _localizedInfoString;
	NSNumber* _duration;
	NSString* _imageUrlStringFormat;

}

@property (nonatomic,retain) NSString * localizedInfoString;               //@synthesize localizedInfoString=_localizedInfoString - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * imageUrlStringFormat;              //@synthesize imageUrlStringFormat=_imageUrlStringFormat - In the implementation block
-(void)setDuration:(NSNumber *)arg1 ;
-(id)description;
-(NSNumber *)duration;
-(NSString *)imageUrlStringFormat;
-(NSString *)localizedInfoString;
-(id)initWithLocalizedProductPlacementInfoString:(id)arg1 duration:(id)arg2 andImageURLStringFormat:(id)arg3 ;
-(void)setLocalizedInfoString:(NSString *)arg1 ;
-(void)setImageUrlStringFormat:(NSString *)arg1 ;
@end

