/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INHomeUserTask, NSArray, INDateComponentsRange;


@protocol INControlHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INHomeUserTask * userTask; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@property (nonatomic,copy) NSArray * contents; 
@required
-(NSArray *)contents;
-(INDateComponentsRange *)time;
-(void)setFilters:(id)arg1;
-(void)setTime:(id)arg1;
-(id)init;
-(NSArray *)filters;
-(INHomeUserTask *)userTask;
-(void)setUserTask:(id)arg1;
-(void)setContents:(id)arg1;

@end

