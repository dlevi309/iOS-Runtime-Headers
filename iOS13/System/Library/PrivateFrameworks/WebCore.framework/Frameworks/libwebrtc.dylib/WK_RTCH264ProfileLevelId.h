/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@class NSString;

@interface WK_RTCH264ProfileLevelId : NSObject {

	unsigned long long _profile;
	unsigned long long _level;
	NSString* _hexString;

}

@property (assign,nonatomic) unsigned long long profile;              //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) unsigned long long level;                //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * hexString;                    //@synthesize hexString=_hexString - In the implementation block
-(unsigned long long)level;
-(unsigned long long)profile;
-(void)setProfile:(unsigned long long)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)initWithHexString:(id)arg1 ;
-(NSString *)hexString;
-(void)setHexString:(NSString *)arg1 ;
-(id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2 ;
@end

