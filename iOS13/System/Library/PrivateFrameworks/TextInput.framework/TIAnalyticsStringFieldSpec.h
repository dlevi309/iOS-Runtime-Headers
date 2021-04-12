/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

