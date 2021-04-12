/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)descriptorWithTextStyle:(id)arg1 ;
+(id)defaultFontForTextStyleDescriptor:(id)arg1 ;
+(id)fontWithTextStyleDescriptor:(id)arg1 ;
+(id)na_identity;
-(id)descriptorByAddingSymbolicTraits:(unsigned)arg1 removingSymbolicTraits:(unsigned)arg2 ;
-(id)init;
-(id)descriptorByDisallowingSmallSizes;
-(id)description;
-(NSString *)textStyle;
-(unsigned)symbolicTraits;
-(id)descriptorByDisallowingAccessibilitySizes;
-(BOOL)allowsSmallSizes;
-(BOOL)allowsAccessibilitySizes;
-(unsigned long long)hash;
-(id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

