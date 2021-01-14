/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface NUTrait : NSObject <NSCopying> {

	double _defaultValue;
	NSMutableDictionary* _traitBlocks;

}

@property (nonatomic,readonly) double defaultValue;                            //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * traitBlocks;              //@synthesize traitBlocks=_traitBlocks - In the implementation block
-(id)init;
-(double)defaultValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)valueForTraitCollection:(id)arg1 size:(CGSize)arg2 ;
-(id)when:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultValue:(double)arg1 ;
-(NSMutableDictionary *)traitBlocks;
-(double)valueForTraitCollection:(id)arg1 size:(CGSize)arg2 deviceTrait:(id)arg3 ;
@end

