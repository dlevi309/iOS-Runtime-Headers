/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	SCD_Struct_AT54* _entries;
	unsigned short _bucketCount;
	BOOL _applyFilter;

}

@property (nonatomic,readonly) unsigned short pointsPerTimeInterval; 
@property (nonatomic,readonly) BOOL applyFilter;                                  //@synthesize applyFilter=_applyFilter - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)pointsPerTimeInterval;
-(BOOL)applyFilter;
@end

