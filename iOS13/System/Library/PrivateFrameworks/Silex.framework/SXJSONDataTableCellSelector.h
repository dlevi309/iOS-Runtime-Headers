/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONDataTableSelector.h>
#import <libobjc.A.dylib/SXDataTableCellSelector.h>

@class NSString;

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
@property (nonatomic,readonly) unsigned long long evenRows; 
@property (nonatomic,readonly) unsigned long long oddRows; 
@property (nonatomic,readonly) unsigned long long evenColumns; 
@property (nonatomic,readonly) unsigned long long oddColumns; 
-(unsigned long long)oddColumns;
-(unsigned long long)evenColumns;
-(unsigned long long)oddRows;
-(unsigned long long)evenRows;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
@end

