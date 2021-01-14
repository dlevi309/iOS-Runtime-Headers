/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PPEventQuery : NSObject <NSSecureCoding> {

	NSDate* _fromDate;
	NSDate* _toDate;

}

@property (nonatomic,retain) NSDate * fromDate;              //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                //@synthesize toDate=_toDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)toDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)fromDate;
-(void)setToDate:(NSDate *)arg1 ;
@end

