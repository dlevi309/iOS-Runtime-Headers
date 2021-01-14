/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProfile:(unsigned long long)arg1 ;
-(NSString *)hexString;
-(unsigned long long)level;
-(unsigned long long)profile;
-(id)initWithHexString:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setHexString:(NSString *)arg1 ;
-(id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2 ;
@end

