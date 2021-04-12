/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SXTextStyleAttributes : NSObject <NSCopying> {

	NSMutableDictionary* _mutableAttributes;
	NSRange _range;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableAttributes;              //@synthesize mutableAttributes=_mutableAttributes - In the implementation block
@property (nonatomic,readonly) NSRange range;                                        //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)attributesWithRange:(NSRange)arg1 ;
-(NSRange)range;
-(NSMutableDictionary *)mutableAttributes;
-(NSDictionary *)attributes;
-(id)description;
-(id)initWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
@end

