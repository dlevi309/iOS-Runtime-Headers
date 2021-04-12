/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface OKPresentationWidget : OKPresentationCanvas {

	NSString* _templateName;
	NSString* _internalName;
	NSString* _internalClassName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSMutableArray* _internalSubWidgets;
	NSMutableArray* _internalMaterials;
	NSString* _className;
	NSMutableArray* _subWidgets;
	NSMutableArray* _materials;

}

@property (nonatomic,copy) NSString * templateName;                           //@synthesize templateName=_templateName - In the implementation block
@property (nonatomic,copy) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * subWidgets;              //@synthesize subWidgets=_subWidgets - In the implementation block
@property (nonatomic,copy) NSMutableArray * materials;                        //@synthesize materials=_materials - In the implementation block
+(id)widgetWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5 subWidgets:(id)arg6 materials:(id)arg7 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)parentPage;
-(NSString *)templateName;
-(NSMutableArray *)materials;
-(void)setMaterials:(NSMutableArray *)arg1 ;
-(id)materialWithName:(id)arg1 ;
-(void)setTemplateName:(NSString *)arg1 ;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)subWidgetWithName:(id)arg1 ;
-(NSMutableArray *)subWidgets;
-(id)parentWidget;
-(id)widgetTemplate;
@end

