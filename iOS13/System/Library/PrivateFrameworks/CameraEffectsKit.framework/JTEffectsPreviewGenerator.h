/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class PVRenderer, NSString;

@interface JTEffectsPreviewGenerator : NSObject {

	PVRenderer* _renderer;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithRendererOptions:(id)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)_renderJob:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generatePreviewRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)perfLog;
@end

