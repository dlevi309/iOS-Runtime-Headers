/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)leading;
-(LPPointUnit *)top;
-(LPPointUnit *)bottom;
-(LPPointUnit *)trailing;
-(void)setBottom:(LPPointUnit *)arg1 ;
-(void)setTop:(LPPointUnit *)arg1 ;
-(id)_lp_CSSText;
-(void)setTrailing:(LPPointUnit *)arg1 ;
-(void)setLeading:(LPPointUnit *)arg1 ;
-(UIEdgeInsets)asInsetsForLTR:(BOOL)arg1 ;
@end

