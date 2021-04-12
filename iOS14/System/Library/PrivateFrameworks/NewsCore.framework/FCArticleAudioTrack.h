/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying> {

	long long _type;
	FCAVAsset* _asset;
	double _duration;

}

@property (nonatomic,readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) FCAVAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
-(id)init;
-(FCAVAsset *)asset;
-(id)initWithType:(long long)arg1 asset:(id)arg2 duration:(double)arg3 ;
-(long long)type;
-(unsigned long long)hash;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

