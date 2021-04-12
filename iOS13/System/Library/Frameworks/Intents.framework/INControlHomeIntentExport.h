/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INHomeUserTask, NSArray, INDateComponentsRange;


@protocol INControlHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INHomeUserTask * userTask; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@property (nonatomic,copy) NSArray * contents; 
@required
-(id)init;
-(NSArray *)contents;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(void)setTime:(id)arg1;
-(void)setContents:(id)arg1;
-(void)setFilters:(id)arg1;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(id)arg1;

@end

