/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INDateComponentsRange;


@protocol INShowHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@required
-(INDateComponentsRange *)time;
-(void)setFilters:(id)arg1;
-(void)setTime:(id)arg1;
-(id)init;
-(NSArray *)filters;

@end

