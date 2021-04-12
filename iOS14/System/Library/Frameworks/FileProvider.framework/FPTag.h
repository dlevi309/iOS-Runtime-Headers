/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying> {

	int _color;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) int color;                     //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)color;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLabel:(id)arg1 color:(int)arg2 ;
-(id)description;
-(long long)localizedStandardCompare:(id)arg1 ;
-(BOOL)isEqualToTag:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
@end

