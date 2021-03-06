/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreContactPropertyValueFilter.h>

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter> {

	NSArray* _valueFilters;

}

@property (nonatomic,readonly) NSArray * valueFilters;              //@synthesize valueFilters=_valueFilters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithValueFilters:(id)arg1 ;
-(void)filterPropertyValuesFromContact:(id)arg1 ;
-(NSArray *)valueFilters;
-(id)contactByFilteringOutPropertyValueOfContact:(id)arg1 ;
@end

