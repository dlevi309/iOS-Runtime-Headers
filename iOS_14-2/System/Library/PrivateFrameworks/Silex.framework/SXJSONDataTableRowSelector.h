/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONDataTableSelector.h>
#import <libobjc.A.dylib/SXDataTableRowSelector.h>

@class NSString;

@interface SXJSONDataTableRowSelector : SXJSONDataTableSelector <SXDataTableRowSelector>

@property (nonatomic,readonly) unsigned long long even; 
@property (nonatomic,readonly) unsigned long long odd; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)odd;
-(unsigned long long)even;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
-(unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2 ;
@end

