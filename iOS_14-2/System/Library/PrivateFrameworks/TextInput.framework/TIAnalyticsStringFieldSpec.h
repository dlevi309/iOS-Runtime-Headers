/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec {

	NSArray* _allowedValues;

}

@property (nonatomic,readonly) NSArray * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 allowedValues:(id)arg2 ;
-(NSArray *)allowedValues;
@end

