/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _lastFetchWasSuccess;
	unsigned _compatibilityVersion;
	NSString* _namespaceName;
	NSDate* _lastFetchAttempt;

}

@property (nonatomic,readonly) NSString * namespaceName;                   //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchAttempt;                  //@synthesize lastFetchAttempt=_lastFetchAttempt - In the implementation block
@property (nonatomic,readonly) BOOL lastFetchWasSuccess;                   //@synthesize lastFetchWasSuccess=_lastFetchWasSuccess - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)statusFromData:(id)arg1 ;
+(id)statusWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(BOOL)arg4 ;
-(unsigned)compatibilityVersion;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(id)description;
-(id)asData;
-(BOOL)lastFetchWasSuccess;
-(NSDate *)lastFetchAttempt;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithReplacementNamespaceName:(id)arg1 ;
-(NSString *)namespaceName;
-(id)initWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(BOOL)arg4 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(id)copyWithReplacementLastFetchAttempt:(id)arg1 ;
-(id)copyWithReplacementLastFetchWasSuccess:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

