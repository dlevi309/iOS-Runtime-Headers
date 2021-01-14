/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAsset;

@interface VEKSuggestion : NSObject <NSSecureCoding> {

	PHAsset* _asset;
	long long _usage;
	long long _volume;
	long long _specialTreatment;
	double _reorderTimeOffset;

}

@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long usage;                         //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) long long volume;                        //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) long long specialTreatment;              //@synthesize specialTreatment=_specialTreatment - In the implementation block
@property (assign,nonatomic) double reorderTimeOffset;                //@synthesize reorderTimeOffset=_reorderTimeOffset - In the implementation block
-(long long)usage;
-(void)setVolume:(long long)arg1 ;
-(PHAsset *)asset;
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(void)setUsage:(long long)arg1 ;
-(long long)volume;
-(long long)specialTreatment;
-(void)setSpecialTreatment:(long long)arg1 ;
-(double)reorderTimeOffset;
-(void)setReorderTimeOffset:(double)arg1 ;
@end

