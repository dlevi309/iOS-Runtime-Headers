/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSData* _storage;

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * storage;              //@synthesize storage=_storage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataFromUserActivity:(id)arg1 ;
+(id)stringForActivityType:(long long)arg1 ;
+(void)userActivityWithUserActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)userActivityWithDictionaryData:(id)arg1 error:(id*)arg2 ;
-(id)userActivity;
-(id)initWithType:(long long)arg1 storage:(id)arg2 ;
-(id)debugDescriptionDetails;
-(id)initWithSiriIntent:(id)arg1 ;
-(id)archivedDictionaryData;
-(NSData *)storage;
-(id)initWithUserActivity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithUserActivityData:(id)arg1 ;
-(id)initWithUniversalLink:(id)arg1 ;
-(id)universalLink;
-(long long)type;
-(id)userActivityData;
-(id)initWithCoder:(id)arg1 ;
-(id)siriIntent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

