/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class AXMSemanticTextFactory;

@interface AXMTextLayoutManager : NSObject {

	AXMSemanticTextFactory* _semanticTextFactory;

}

@property (nonatomic,retain) AXMSemanticTextFactory * semanticTextFactory;              //@synthesize semanticTextFactory=_semanticTextFactory - In the implementation block
-(AXMSemanticTextFactory *)semanticTextFactory;
-(id)initWithSemanticTextFactory:(id)arg1 ;
-(id)documentWithTextItems:(id)arg1 canvasSize:(CGSize)arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(BOOL)arg4 error:(id*)arg5 ;
-(void)setSemanticTextFactory:(AXMSemanticTextFactory *)arg1 ;
-(id)_assembleLayoutSequences:(id)arg1 canvasSize:(CGSize)arg2 ;
-(id)_assembleLayoutLines:(id)arg1 ;
-(id)_assembleLayoutRegions:(id)arg1 ;
@end

