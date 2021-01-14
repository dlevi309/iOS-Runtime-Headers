/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PPNotification : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleId;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)message;
-(id)init;
-(NSString *)bundleId;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCurrentDateAndBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 ;
-(BOOL)isEqualToNotification:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 date:(id)arg5 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

