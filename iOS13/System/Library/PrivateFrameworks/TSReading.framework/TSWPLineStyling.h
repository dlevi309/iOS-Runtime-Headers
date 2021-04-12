/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <NSCopying> {

	long long _lineCount;
	unsigned long long _options;
	TSSPropertyMap* _additionalCharacterStylePropertyMap;
	TSSPropertyMap* _overrideCharacterStylePropertyMap;

}

@property (nonatomic,readonly) long long lineCount;                                                      //@synthesize lineCount=_lineCount - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * additionalCharacterStylePropertyMap;              //@synthesize additionalCharacterStylePropertyMap=_additionalCharacterStylePropertyMap - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * overrideCharacterStylePropertyMap;                //@synthesize overrideCharacterStylePropertyMap=_overrideCharacterStylePropertyMap - In the implementation block
+(id)lineStylingWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(long long)lineCount;
-(TSSPropertyMap *)overrideCharacterStylePropertyMap;
-(id)initWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4 ;
-(TSSPropertyMap *)additionalCharacterStylePropertyMap;
-(id)_optionsDescription;
@end

