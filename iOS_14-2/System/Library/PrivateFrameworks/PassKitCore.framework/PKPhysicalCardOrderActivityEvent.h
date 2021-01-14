/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface PKPhysicalCardOrderActivityEvent : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _activity;
	NSDate* _date;
	NSString* _localizedReason;

}

@property (assign,nonatomic) unsigned long long activity;                    //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedReason;              //@synthesize localizedReason=_localizedReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setActivity:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)localizedReason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

