/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
+(id)hostingInfoForWindowScene:(id)arg1 ;
-(NSDictionary *)_options;
-(UIWindowScene *)scene;
-(void)setScene:(UIWindowScene *)arg1 ;
-(BOOL)useHostedInstance;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(UIWindowScene *)_intendedCanvas;
-(NSDictionary *)perSceneOptions;
-(void)setPerSceneOptions:(NSDictionary *)arg1 ;
@end

