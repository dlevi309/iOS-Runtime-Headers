/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNExportOperation.h>

@class SCNScene, SCNNode, NSError, NSDictionary, NSURL, SCNRenderer;

@interface _SCNExportOperation : SCNExportOperation {

	void* _userInfo;
	SEL _didEndSelector;
	SCNScene* _scene;
	CGSize _size;
	SCNNode* _pointOfView;
	double _startTime;
	double _endTime;
	double _systemTime;
	BOOL _canceled;
	BOOL _succeded;
	double _progress;
	NSError* _error;
	id _delegate;
	NSDictionary* _attributes;
	NSURL* _outputURL;
	SCNRenderer* _renderer;
	unsigned long long _antialiasingMode;

}

@property (assign,nonatomic) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) SEL didEndSelector;                               //@synthesize didEndSelector=_didEndSelector - In the implementation block
@property (nonatomic,retain) SCNScene * scene;                                 //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                   //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL succeded;                                    //@synthesize succeded=_succeded - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) SCNNode * pointOfView;                            //@synthesize pointOfView=_pointOfView - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long antialiasingMode;              //@synthesize antialiasingMode=_antialiasingMode - In the implementation block
@property (nonatomic,retain) SCNRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
-(void)dealloc;
-(void*)userInfo;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(CGSize)size;
-(NSError *)error;
-(void)cancel;
-(NSDictionary *)attributes;
-(void)setError:(NSError *)arg1 ;
-(double)progress;
-(void)setUserInfo:(void*)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSURL *)outputURL;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(SCNRenderer *)renderer;
-(void)setRenderer:(SCNRenderer *)arg1 ;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(unsigned long long)antialiasingMode;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(void)setDidEndSelector:(SEL)arg1 ;
-(BOOL)succeded;
-(SEL)didEndSelector;
-(void)setSucceded:(BOOL)arg1 ;
@end

