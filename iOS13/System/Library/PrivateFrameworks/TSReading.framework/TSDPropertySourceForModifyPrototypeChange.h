/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSSPropertySource.h>

@class TSDModifyPrototypeChange, NSString;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {

	TSDModifyPrototypeChange* mChange;
	BOOL mAfterChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(id)initWithPrototypeChange:(id)arg1 afterChange:(BOOL)arg2 ;
-(id)p_propertyMap;
@end

