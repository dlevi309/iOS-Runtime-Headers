/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface _CDUserActivity : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _type;
	NSString* _title;
	NSDate* _date;
	NSDictionary* _payload;

}

@property (copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (copy) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createFromUserActivity:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)payload;
-(id)description;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
@end

