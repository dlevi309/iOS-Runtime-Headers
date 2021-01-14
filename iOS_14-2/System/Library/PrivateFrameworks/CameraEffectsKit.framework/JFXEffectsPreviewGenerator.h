/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class PVRenderer, NSString;

@interface JFXEffectsPreviewGenerator : NSObject {

	PVRenderer* _renderer;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)clearCaches;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)perfLog;
-(void)dealloc;
-(id)initWithRendererOptions:(id)arg1 ;
-(void)generatePreviewRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)_renderJob:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

