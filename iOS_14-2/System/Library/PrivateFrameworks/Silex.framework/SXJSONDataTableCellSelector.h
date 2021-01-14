/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONDataTableSelector.h>
#import <libobjc.A.dylib/SXDataTableCellSelector.h>

@class NSString;

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>

@property (nonatomic,readonly) unsigned long long evenRows; 
@property (nonatomic,readonly) unsigned long long oddRows; 
@property (nonatomic,readonly) unsigned long long evenColumns; 
@property (nonatomic,readonly) unsigned long long oddColumns; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)oddColumns;
-(unsigned long long)evenColumns;
-(unsigned long long)oddRows;
-(unsigned long long)evenRows;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
@end

