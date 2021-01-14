/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKDiscoveryRelevantDateRange : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidForTime:(id)arg1 ;
-(BOOL)isExpiredForDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

