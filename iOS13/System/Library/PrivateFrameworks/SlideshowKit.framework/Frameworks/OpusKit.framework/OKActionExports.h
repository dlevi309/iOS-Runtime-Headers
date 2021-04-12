/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

@class NSDictionary;


@protocol OKActionExports <JSExport>
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long touchCount; 
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,retain,readonly) NSDictionary * context; 
@required
-(unsigned long long)state;
-(NSDictionary *)context;
-(double)timestamp;
-(unsigned long long)platform;
-(CGPoint)location;
-(unsigned long long)touchCount;
-(void)setContextObject:(id)arg1 forKey:(id)arg2;

@end

