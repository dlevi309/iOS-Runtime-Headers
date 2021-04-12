/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;

}

@property (nonatomic,copy) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;              //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)canonicalName;
-(NSString *)uniqueClientId;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(BOOL)isCalendarClientInfo;
-(BOOL)isNavdClientInfo;
@end

