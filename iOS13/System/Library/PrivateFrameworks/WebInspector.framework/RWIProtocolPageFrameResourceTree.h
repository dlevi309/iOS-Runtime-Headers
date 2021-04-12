/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
+(id)safe_initWithFrame:(id)arg1 resources:(id)arg2 ;
-(RWIProtocolPageFrame *)frame;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(NSArray *)childFrames;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setChildFrames:(NSArray *)arg1 ;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
@end

