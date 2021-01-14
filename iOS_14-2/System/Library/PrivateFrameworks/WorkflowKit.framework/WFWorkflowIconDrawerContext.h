/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSSet;

@interface WFWorkflowIconDrawerContext : NSObject {

	CGFontRef _glyphFont;
	const CTFontRef _glyphTestFont;
	NSSet* _coreGlyphsCatalogs;

}

@property (nonatomic,readonly) CGFontRef glyphFont;                        //@synthesize glyphFont=_glyphFont - In the implementation block
@property (nonatomic,readonly) NSSet * coreGlyphsCatalogs;                 //@synthesize coreGlyphsCatalogs=_coreGlyphsCatalogs - In the implementation block
@property (nonatomic,readonly) const CTFontRef glyphTestFont;              //@synthesize glyphTestFont=_glyphTestFont - In the implementation block
+(double)glyphTestFontSize;
+(id)cachedContextOrNewContext;
-(CGFontRef)glyphFont;
-(void)dealloc;
-(NSSet *)coreGlyphsCatalogs;
-(const CTFontRef)glyphTestFont;
-(const CTFontRef)newGlyphFontForSize:(double)arg1 ;
@end

