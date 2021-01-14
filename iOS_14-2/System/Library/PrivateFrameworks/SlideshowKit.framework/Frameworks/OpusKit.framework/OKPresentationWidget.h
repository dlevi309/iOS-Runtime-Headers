/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)dictionary;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setMaterials:(NSMutableArray *)arg1 ;
-(NSMutableArray *)materials;
-(id)materialWithName:(id)arg1 ;
-(void)resolveIfNeeded;
-(id)parentPage;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)subWidgetWithName:(id)arg1 ;
-(NSMutableArray *)subWidgets;
-(id)parentWidget;
-(id)widgetTemplate;
@end

