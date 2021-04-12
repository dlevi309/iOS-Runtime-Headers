/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface WAMessage : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRootMessage;
	NSMutableDictionary* _mutableFields;
	NSString* _key;
	NSString* _originalClassName;
	NSString* _uuid;
	unsigned long long _metricID;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableFields;              //@synthesize mutableFields=_mutableFields - In the implementation block
@property (nonatomic,readonly) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL isRootMessage;                               //@synthesize isRootMessage=_isRootMessage - In the implementation block
@property (nonatomic,readonly) NSString * originalClassName;                     //@synthesize originalClassName=_originalClassName - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long metricID;                      //@synthesize metricID=_metricID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setKey:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)addField:(id)arg1 ;
-(id)fieldForKey:(id)arg1 ;
-(NSMutableDictionary *)mutableFields;
-(NSString *)originalClassName;
-(unsigned long long)metricID;
-(id)initWithKey:(id)arg1 andFields:(id)arg2 isRootMessage:(BOOL)arg3 originalClassName:(id)arg4 uuid:(id)arg5 ;
-(void)setMetricID:(unsigned long long)arg1 ;
-(void)setIsRootMessage:(BOOL)arg1 ;
-(void)setOriginalClassName:(NSString *)arg1 ;
-(void)setMutableFields:(NSMutableDictionary *)arg1 ;
-(BOOL)isRootMessage;
@end

