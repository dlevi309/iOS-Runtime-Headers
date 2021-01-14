/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/

#import <HIDAnalytics/HIDAnalyticsEventFieldProtocol.h>

@class NSString;

@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol> {

	unsigned long long integerValue;
	NSString* _fieldName;

}

@property (readonly) NSString * fieldName;                          //@synthesize fieldName=_fieldName - In the implementation block
@property (retain) id value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(NSString *)fieldName;
-(id)value;
@end

