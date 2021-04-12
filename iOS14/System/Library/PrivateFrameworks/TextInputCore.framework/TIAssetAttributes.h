/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TIAssetAttributes : NSObject <NSCopying> {

	NSString* _type;
	NSString* _inputModeLevel;
	NSDictionary* _region;

}

@property (nonatomic,readonly) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
@property (nonatomic,readonly) NSDictionary * region;                  //@synthesize region=_region - In the implementation block
+(BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(/*^block*/id)arg3 ;
+(BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
+(id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3 ;
-(NSDictionary *)region;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3 ;
-(BOOL)containMatchingType:(id)arg1 ;
-(BOOL)containMatchingTypeIn:(id)arg1 ;
-(BOOL)containMatchingInputModeLevel:(id)arg1 ;
-(BOOL)containMatchingInputModeLevelIn:(id)arg1 ;
-(BOOL)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(/*^block*/id)arg2 ;
-(BOOL)containMatchingAttributes:(id)arg1 ;
-(NSString *)inputModeLevel;
@end

