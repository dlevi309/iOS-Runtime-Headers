/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT5* _entries;
	NSDictionary* _lastDates;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)getLastDatesByCategoryId;
@end

