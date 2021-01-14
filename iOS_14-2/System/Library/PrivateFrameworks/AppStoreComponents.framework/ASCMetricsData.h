/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet;

@interface ASCMetricsData : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldFlush;
	NSString* _topic;
	NSDictionary* _fields;
	NSSet* _includingFields;
	NSSet* _excludingFields;

}

@property (nonatomic,copy,readonly) NSString * topic;                     //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL shouldFlush;                          //@synthesize shouldFlush=_shouldFlush - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * fields;                //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy,readonly) NSSet * includingFields;              //@synthesize includingFields=_includingFields - In the implementation block
@property (nonatomic,copy,readonly) NSSet * excludingFields;              //@synthesize excludingFields=_excludingFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)fields;
-(NSString *)topic;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldFlush;
-(id)initWithTopic:(id)arg1 shouldFlush:(BOOL)arg2 fields:(id)arg3 includingFields:(id)arg4 excludingFields:(id)arg5 ;
-(NSSet *)includingFields;
-(NSSet *)excludingFields;
-(id)metricsDataByMergingFields:(id)arg1 uniquingFieldsWithBlock:(/*^block*/id)arg2 ;
@end

