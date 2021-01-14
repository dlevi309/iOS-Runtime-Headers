/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSArray;

@interface TIMobileAssetMatch : NSObject {

	NSArray* _types;
	NSArray* _inputModeLevels;
	NSArray* _regions;

}

@property (nonatomic,readonly) NSArray * types;                        //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSArray * inputModeLevels;              //@synthesize inputModeLevels=_inputModeLevels - In the implementation block
@property (nonatomic,readonly) NSArray * regions;                      //@synthesize regions=_regions - In the implementation block
+(id)knownAssetRegionAttributes;
+(id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(NSArray *)types;
-(NSArray *)regions;
-(id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(NSArray *)inputModeLevels;
-(BOOL)isEqual:(id)arg1 ;
@end

