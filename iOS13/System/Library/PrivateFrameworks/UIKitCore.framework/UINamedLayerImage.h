/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
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
-(id)imageObj;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;
-(id<UINamedLayerContentProvider>)contentProvider;

@required
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(int)blendMode;

@end

