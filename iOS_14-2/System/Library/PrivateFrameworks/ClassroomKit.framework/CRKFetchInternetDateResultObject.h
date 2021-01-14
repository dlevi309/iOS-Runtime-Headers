/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDate;

@interface CRKFetchInternetDateResultObject : CATTaskResultObject {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
@end

