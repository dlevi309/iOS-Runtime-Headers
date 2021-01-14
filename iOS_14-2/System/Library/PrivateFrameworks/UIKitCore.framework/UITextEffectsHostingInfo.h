/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICanvasBasedObject.h>

@class UIWindowScene, NSDictionary, NSString;

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject> {

	unsigned long long _hostedUseCount;
	UIWindowScene* _scene;
	NSDictionary* _perSceneOptions;

}

@property (nonatomic,retain) NSDictionary * perSceneOptions;              //@synthesize perSceneOptions=_perSceneOptions - In the implementation block
@property (nonatomic,retain) UIWindowScene * scene;                       //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) BOOL useHostedInstance; 
@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostingInfoForWindowScene:(id)arg1 ;
-(UIWindowScene *)scene;
-(BOOL)useHostedInstance;
-(UIWindowScene *)_intendedCanvas;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(void)setScene:(UIWindowScene *)arg1 ;
-(NSDictionary *)_options;
-(NSDictionary *)perSceneOptions;
-(void)setPerSceneOptions:(NSDictionary *)arg1 ;
@end

