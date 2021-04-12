/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSSelectorList, IKCSSDeclarationList, IKCSSMediaQuery;

@interface IKCSSRule : NSObject <NSCopying> {

	IKCSSSelectorList* _selectorList;
	IKCSSDeclarationList* _declarationList;

}

@property (nonatomic,retain) IKCSSSelectorList * selectorList;                    //@synthesize selectorList=_selectorList - In the implementation block
@property (nonatomic,retain) IKCSSDeclarationList * declarationList;              //@synthesize declarationList=_declarationList - In the implementation block
@property (nonatomic,readonly) IKCSSMediaQuery * mediaQuery; 
-(id)description;
-(IKCSSMediaQuery *)mediaQuery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKCSSSelectorList *)selectorList;
-(IKCSSDeclarationList *)declarationList;
-(void)setDeclarationList:(IKCSSDeclarationList *)arg1 ;
-(void)setSelectorList:(IKCSSSelectorList *)arg1 ;
@end

