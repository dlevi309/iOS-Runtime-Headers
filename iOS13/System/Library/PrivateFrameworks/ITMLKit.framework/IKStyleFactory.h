/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying> {

	IKStylesGroup* _stylesGroup;
	NSMutableDictionary* _styleListsByClassSelector;

}

@property (nonatomic,retain,readonly) IKStylesGroup * stylesGroup;                                  //@synthesize stylesGroup=_stylesGroup - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleListsByClassSelector;              //@synthesize styleListsByClassSelector=_styleListsByClassSelector - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewElementStylesDirty;
-(IKStylesGroup *)stylesGroup;
-(id)initWithStylesGroup:(id)arg1 ;
-(id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3 ;
-(NSMutableDictionary *)styleListsByClassSelector;
-(id)styleListForClassSelector:(id)arg1 ;
@end

