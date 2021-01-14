/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXDataTableCellSelector <SXDataTableSelector>
@property (nonatomic,readonly) unsigned long long evenRows; 
@property (nonatomic,readonly) unsigned long long oddRows; 
@property (nonatomic,readonly) unsigned long long evenColumns; 
@property (nonatomic,readonly) unsigned long long oddColumns; 
@required
-(unsigned long long)oddRows;
-(unsigned long long)evenRows;
-(unsigned long long)evenColumns;
-(unsigned long long)oddColumns;

@end

