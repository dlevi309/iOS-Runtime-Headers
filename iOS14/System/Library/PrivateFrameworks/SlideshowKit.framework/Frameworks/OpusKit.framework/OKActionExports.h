/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)platform;
-(double)timestamp;
-(CGPoint)location;
-(NSDictionary *)context;
-(unsigned long long)touchCount;
-(unsigned long long)state;
-(void)setContextObject:(id)arg1 forKey:(id)arg2;

@end

