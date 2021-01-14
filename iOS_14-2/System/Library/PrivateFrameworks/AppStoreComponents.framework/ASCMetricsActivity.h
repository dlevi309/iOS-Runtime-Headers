/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _fields;

}

@property (nonatomic,copy,readonly) NSDictionary * fields;              //@synthesize fields=_fields - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultFields;
-(NSDictionary *)fields;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFields:(id)arg1 ;
-(id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(/*^block*/id)arg2 ;
-(id)metricsActivityByRemovingValueForKey:(id)arg1 ;
@end

