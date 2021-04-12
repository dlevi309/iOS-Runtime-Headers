/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/TSDWrappable.h>

@class SXTextExclusionPath, TSDWrapPolygon, NSString;

@interface SXTextExclusionPathWrapper : NSObject <TSDWrappable> {

	BOOL _isRectangular;
	SXTextExclusionPath* _exclusionPath;
	TSDWrapPolygon* _myWrapPolygon;

}

@property (nonatomic,readonly) BOOL isRectangular;                                      //@synthesize isRectangular=_isRectangular - In the implementation block
@property (nonatomic,readonly) TSDWrapPolygon * myWrapPolygon;                          //@synthesize myWrapPolygon=_myWrapPolygon - In the implementation block
@property (nonatomic,__weak,readonly) SXTextExclusionPath * exclusionPath;              //@synthesize exclusionPath=_exclusionPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasAlpha; 
-(id)parent;
-(BOOL)isRectangular;
-(BOOL)hasAlpha;
-(id)wrapPolygon;
-(SXTextExclusionPath *)exclusionPath;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(id)initWithTextExclusionPath:(id)arg1 ;
-(TSDWrapPolygon *)myWrapPolygon;
-(BOOL)isHTMLWrap;
-(int)wrapType;
-(int)wrapDirection;
-(int)wrapFitType;
@end

