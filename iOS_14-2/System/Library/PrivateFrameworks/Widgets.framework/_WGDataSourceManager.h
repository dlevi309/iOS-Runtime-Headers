/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

@class NSArray;


@protocol _WGDataSourceManager <NSObject>
@property (assign,nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(NSArray *)dataSources;
-(void)_start:(/*^block*/id)arg1;
-(void)setParentDataSourceManager:(id)arg1;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)_stop:(/*^block*/id)arg1;

@end

