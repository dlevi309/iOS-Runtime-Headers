/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray, NSMapTable;


@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations; 
@required
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(id)arg1;

@end

