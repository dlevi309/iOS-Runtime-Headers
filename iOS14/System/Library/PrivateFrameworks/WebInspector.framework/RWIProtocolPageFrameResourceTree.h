/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
+(id)safe_initWithFrame:(id)arg1 resources:(id)arg2 ;
-(NSArray *)resources;
-(RWIProtocolPageFrame *)frame;
-(void)setResources:(NSArray *)arg1 ;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(NSArray *)childFrames;
-(void)setChildFrames:(NSArray *)arg1 ;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
@end

