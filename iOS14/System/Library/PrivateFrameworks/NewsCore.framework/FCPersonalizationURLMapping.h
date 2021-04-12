/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBURLMapping, NSDictionary;

@interface FCPersonalizationURLMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBURLMapping* _pbURLMapping;
	NSDictionary* _urlMappingByDomain;

}

@property (nonatomic,retain) NSDictionary * urlMappingByDomain;              //@synthesize urlMappingByDomain=_urlMappingByDomain - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)domainForURL:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)jsonEncodableObject;
-(unsigned long long)count;
-(id)initWithPBURLMapping:(id)arg1 ;
-(NSDictionary *)urlMappingByDomain;
-(void)setUrlMappingByDomain:(NSDictionary *)arg1 ;
-(id)tagScoresForURL:(id)arg1 ;
-(id)popularityForURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

