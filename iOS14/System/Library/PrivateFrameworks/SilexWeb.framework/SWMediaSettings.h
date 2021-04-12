/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/


@interface SWMediaSettings : NSObject {

	BOOL _fullScreenEnabled;
	unsigned long long _mediaTypesRequiringUserActionForPlayback;

}

@property (nonatomic,readonly) unsigned long long mediaTypesRequiringUserActionForPlayback;              //@synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback - In the implementation block
@property (nonatomic,readonly) BOOL fullScreenEnabled;                                                   //@synthesize fullScreenEnabled=_fullScreenEnabled - In the implementation block
-(BOOL)fullScreenEnabled;
-(unsigned long long)mediaTypesRequiringUserActionForPlayback;
-(id)initWithMediaTypesRequiringUserActionForPlayback:(unsigned long long)arg1 fullScreenEnabled:(BOOL)arg2 ;
@end

