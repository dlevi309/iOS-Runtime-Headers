/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)regions;
-(NSArray *)types;
-(id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(NSArray *)inputModeLevels;
@end

