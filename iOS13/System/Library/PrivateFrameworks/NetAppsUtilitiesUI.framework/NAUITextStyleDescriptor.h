/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/

#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {

	BOOL _allowsAccessibilitySizes;
	BOOL _allowsSmallSizes;
	unsigned _symbolicTraits;
	NSString* _textStyle;

}

@property (nonatomic,copy,readonly) NSString * textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) unsigned symbolicTraits;                    //@synthesize symbolicTraits=_symbolicTraits - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccessibilitySizes;              //@synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes - In the implementation block
@property (nonatomic,readonly) BOOL allowsSmallSizes;                      //@synthesize allowsSmallSizes=_allowsSmallSizes - In the implementation block
+(id)na_identity;
+(id)descriptorWithTextStyle:(id)arg1 ;
+(id)fontWithTextStyleDescriptor:(id)arg1 ;
+(id)defaultFontForTextStyleDescriptor:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)symbolicTraits;
-(NSString *)textStyle;
-(id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4 ;
-(BOOL)allowsAccessibilitySizes;
-(BOOL)allowsSmallSizes;
-(id)descriptorByAddingSymbolicTraits:(unsigned)arg1 removingSymbolicTraits:(unsigned)arg2 ;
-(id)descriptorByDisallowingAccessibilitySizes;
-(id)descriptorByDisallowingSmallSizes;
@end

