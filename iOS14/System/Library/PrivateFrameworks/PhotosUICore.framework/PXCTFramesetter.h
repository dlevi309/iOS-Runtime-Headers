/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject {

	BOOL _prepared;
	NSAttributedString* _attributedString;
	CGContextRef _context;
	const CTFramesetterRef _framesetter;
	NSShadow* _shadow;

}

@property (nonatomic,readonly) const CTFramesetterRef framesetter;                      //@synthesize framesetter=_framesetter - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                       //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                                    //@synthesize context=_context - In the implementation block
-(NSShadow *)shadow;
-(id)init;
-(NSAttributedString *)attributedString;
-(CGContextRef)context;
-(const CTFramesetterRef)framesetter;
-(id)frameWithRect:(CGRect)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3 ;
-(id)initWithAttributedString:(id)arg1 context:(CGContextRef)arg2 ;
-(void)prepare;
-(void)dealloc;
@end

