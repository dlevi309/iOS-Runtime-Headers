/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKPresentationNavigator : OKPresentationCanvas {

	NSString* _className;
	NSMutableArray* _pagesNames;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;

}

@property (nonatomic,copy) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * pagesNames;              //@synthesize pagesNames=_pagesNames - In the implementation block
+(id)navigatorWithName:(id)arg1 className:(id)arg2 pagesNames:(id)arg3 settings:(id)arg4 userData:(id)arg5 ;
-(id)pages;
-(id)init;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)resolveIfNeeded;
-(id)parentPage;
-(id)canvasWithName:(id)arg1 ;
-(id)pageWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4 ;
-(NSMutableArray *)pagesNames;
-(void)addPageName:(id)arg1 ;
@end

