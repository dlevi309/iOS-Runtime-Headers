/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setUsage:(long long)arg1 ;
-(long long)usage;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(long long)volume;
-(void)setVolume:(long long)arg1 ;
-(long long)specialTreatment;
-(void)setSpecialTreatment:(long long)arg1 ;
-(double)reorderTimeOffset;
-(void)setReorderTimeOffset:(double)arg1 ;
@end

