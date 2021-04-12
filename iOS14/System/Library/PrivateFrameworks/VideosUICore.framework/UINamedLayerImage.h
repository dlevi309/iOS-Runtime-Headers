/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@optional
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;
-(id)imageObj;
-(id<UINamedLayerContentProvider>)contentProvider;

@required
-(int)blendMode;
-(double)opacity;
-(CGRect)frame;
-(NSString *)name;

@end

