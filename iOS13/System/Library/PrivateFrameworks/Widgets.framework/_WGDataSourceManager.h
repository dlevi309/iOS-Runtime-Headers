/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

@class NSArray;


@protocol _WGDataSourceManager <NSObject>
@property (assign,nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(NSArray *)dataSources;
-(void)_start:(/*^block*/id)arg1;
-(void)_stop:(/*^block*/id)arg1;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id)arg1;

@end

