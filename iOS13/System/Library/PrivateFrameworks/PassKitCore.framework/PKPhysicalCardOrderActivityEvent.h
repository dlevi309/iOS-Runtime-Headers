/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)activity;
-(void)setActivity:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)localizedReason;
@end

