/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCanceled:(BOOL)arg1 ;
-(void)setUserInfo:(void*)arg1 ;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(void*)userInfo;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(double)progress;
-(id)delegate;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(CGSize)size;
-(void)setStartTime:(double)arg1 ;
-(BOOL)canceled;
-(void)setSize:(CGSize)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSURL *)outputURL;
-(SCNRenderer *)renderer;
-(unsigned long long)antialiasingMode;
-(NSDictionary *)attributes;
-(void)setRenderer:(SCNRenderer *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(SCNNode *)pointOfView;
-(void)setProgress:(double)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)cancel;
-(double)startTime;
-(void)dealloc;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(void)setDidEndSelector:(SEL)arg1 ;
-(BOOL)succeded;
-(SEL)didEndSelector;
-(void)setSucceded:(BOOL)arg1 ;
@end

