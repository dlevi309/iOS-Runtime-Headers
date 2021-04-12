/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(long long)localizedStandardCompare:(id)arg1 ;
-(int)color;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 color:(int)arg2 ;
-(BOOL)isEqualToTag:(id)arg1 ;
@end

