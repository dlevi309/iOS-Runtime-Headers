/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HFSimpleFormatter : NSFormatter <NSCopying> {

	/*^block*/id _formatterBlock;
	/*^block*/id _attributedFormatterBlock;

}

@property (nonatomic,copy,readonly) id formatterBlock;                        //@synthesize formatterBlock=_formatterBlock - In the implementation block
@property (nonatomic,copy,readonly) id attributedFormatterBlock;              //@synthesize attributedFormatterBlock=_attributedFormatterBlock - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)initWithFormatterBlock:(/*^block*/id)arg1 ;
-(id)formatterBlock;
-(id)attributedFormatterBlock;
-(id)initWithAttributedFormatterBlock:(/*^block*/id)arg1 ;
@end

