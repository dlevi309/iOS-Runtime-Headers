/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPPadding : NSObject <LPCSSText, NSCopying> {

	LPPointUnit* _top;
	LPPointUnit* _leading;
	LPPointUnit* _bottom;
	LPPointUnit* _trailing;

}

@property (nonatomic,retain) LPPointUnit * top;                   //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) LPPointUnit * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) LPPointUnit * bottom;                //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) LPPointUnit * trailing;              //@synthesize trailing=_trailing - In the implementation block
-(LPPointUnit *)leading;
-(id)init;
-(void)setTrailing:(LPPointUnit *)arg1 ;
-(void)setLeading:(LPPointUnit *)arg1 ;
-(UIEdgeInsets)asInsetsForLTR:(BOOL)arg1 ;
-(void)setBottom:(LPPointUnit *)arg1 ;
-(void)setTop:(LPPointUnit *)arg1 ;
-(LPPointUnit *)bottom;
-(LPPointUnit *)top;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)trailing;
-(id)_lp_CSSText;
@end

