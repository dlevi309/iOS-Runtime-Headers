/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface OKPresentationPage : OKPresentationCanvas {

	NSString* _templateName;
	NSString* _internalNavigatorName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSMutableArray* _internalWidgets;
	NSString* _navigatorName;
	NSMutableArray* _widgets;

}

@property (nonatomic,copy) NSString * navigatorName;                       //@synthesize navigatorName=_navigatorName - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * widgets;              //@synthesize widgets=_widgets - In the implementation block
+(id)pageWithName:(id)arg1 templateName:(id)arg2 navigatorName:(id)arg3 properties:(id)arg4 settings:(id)arg5 userData:(id)arg6 widgets:(id)arg7 ;
-(id)init;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)widgets;
-(void)dealloc;
-(id)navigator;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4 ;
-(void)setNavigatorName:(NSString *)arg1 ;
-(id)widgetWithName:(id)arg1 ;
-(NSString *)navigatorName;
-(id)parentNavigator;
-(id)pageTemplate;
@end

