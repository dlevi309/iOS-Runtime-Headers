/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


#import <BiometricKit/BiometricKit-Structs.h>
@class NSArray;

@interface BKEnrollPearlProgressInfo : NSObject {

	long long _percentageCompleted;
	NSArray* _enrolledPoses;

}

@property (assign,nonatomic) long long percentageCompleted;              //@synthesize percentageCompleted=_percentageCompleted - In the implementation block
@property (nonatomic,retain) NSArray * enrolledPoses;                    //@synthesize enrolledPoses=_enrolledPoses - In the implementation block
-(id)initFromDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithPercents:(long long)arg1 ;
-(id)initFromEnrollInfo:(const SCD_Struct_BK11*)arg1 ;
-(long long)percentageCompleted;
-(void)setPercentageCompleted:(long long)arg1 ;
-(NSArray *)enrolledPoses;
-(void)setEnrolledPoses:(NSArray *)arg1 ;
@end

