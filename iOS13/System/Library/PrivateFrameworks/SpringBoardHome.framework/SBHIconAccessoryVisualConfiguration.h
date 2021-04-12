/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHIconAccessoryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _fontSize;
	CGSize _size;
	CGPoint _offset;

}

@property (assign,nonatomic) double fontSize;                       //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint offset;                        //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setOffset:(CGPoint)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(CGPoint)offset;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

