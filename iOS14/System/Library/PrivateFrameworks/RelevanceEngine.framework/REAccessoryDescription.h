/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, CLKTextProvider;

@interface REAccessoryDescription : NSObject <NSCopying, NSCoding> {

	UIColor* _backgroundColor;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CLKTextProvider *)textProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
@end

