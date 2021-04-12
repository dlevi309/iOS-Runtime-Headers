/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface WFDatePickerConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _datePickerMode;
	NSDate* _defaultDate;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (nonatomic,copy) NSString * datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * defaultDate;                 //@synthesize defaultDate=_defaultDate - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                 //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                 //@synthesize maximumDate=_maximumDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)defaultDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)datePickerMode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

