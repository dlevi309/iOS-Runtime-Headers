/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(NSMutableDictionary *)mutableAttributes;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
@end

