/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * callFrames; 
@property (assign,nonatomic) BOOL topCallFrameIsBoundary; 
@property (assign,nonatomic) BOOL truncated; 
@property (nonatomic,retain) RWIProtocolConsoleStackTrace * parentStackTrace; 
-(void)setCallFrames:(NSArray *)arg1 ;
-(id)initWithCallFrames:(id)arg1 ;
-(NSArray *)callFrames;
-(void)setTopCallFrameIsBoundary:(BOOL)arg1 ;
-(BOOL)topCallFrameIsBoundary;
-(void)setTruncated:(BOOL)arg1 ;
-(BOOL)truncated;
-(void)setParentStackTrace:(RWIProtocolConsoleStackTrace *)arg1 ;
-(RWIProtocolConsoleStackTrace *)parentStackTrace;
@end

