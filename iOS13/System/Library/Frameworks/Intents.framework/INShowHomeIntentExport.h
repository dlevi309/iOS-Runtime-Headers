/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INDateComponentsRange;


@protocol INShowHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@required
-(id)init;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(void)setTime:(id)arg1;
-(void)setFilters:(id)arg1;

@end

