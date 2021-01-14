/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray, NSDictionary, AVTCoreModelPairing;

@interface AVTCoreModelCategory : NSObject {

	NSArray* _presets;
	NSDictionary* _tags;
	NSArray* _rows;
	long long _presetCategory;
	AVTCoreModelPairing* _pairing;

}

@property (nonatomic,copy,readonly) NSArray * presets;                          //@synthesize presets=_presets - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tags;                        //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                             //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long presetCategory;                        //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,copy,readonly) AVTCoreModelPairing * pairing;              //@synthesize pairing=_pairing - In the implementation block
-(NSDictionary *)tags;
-(AVTCoreModelPairing *)pairing;
-(id)initWithPresetCategory:(long long)arg1 presets:(id)arg2 tags:(id)arg3 rows:(id)arg4 pairing:(id)arg5 ;
-(NSArray *)presets;
-(NSArray *)rows;
-(long long)presetCategory;
-(id)description;
@end

