/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSSPropertyMap, NSArray;

@interface TSWPDropCap : NSObject <NSCopying> {

	unsigned long long _charCount;
	TSSPropertyMap* _characterStyleOverridePropertyMap;
	NSArray* _spacings;

}

@property (nonatomic,readonly) unsigned long long charCount;                                           //@synthesize charCount=_charCount - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * characterStyleOverridePropertyMap;              //@synthesize characterStyleOverridePropertyMap=_characterStyleOverridePropertyMap - In the implementation block
@property (nonatomic,retain,readonly) NSArray * spacings;                                              //@synthesize spacings=_spacings - In the implementation block
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacing:(id)arg3 ;
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 lineCount:(unsigned long long)arg3 ;
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)spacings;
-(TSSPropertyMap *)characterStyleOverridePropertyMap;
-(unsigned long long)charCount;
-(id)initWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3 ;
-(unsigned long long)computedFlagsForSpacing:(id)arg1 ;
@end

