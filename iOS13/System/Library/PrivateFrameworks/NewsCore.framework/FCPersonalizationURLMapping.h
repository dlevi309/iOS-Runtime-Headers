/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonEncodableObject;
-(id)initWithPBURLMapping:(id)arg1 ;
-(NSDictionary *)urlMappingByDomain;
-(id)tagScoresForURL:(id)arg1 ;
-(id)popularityForURL:(id)arg1 ;
-(void)setUrlMappingByDomain:(NSDictionary *)arg1 ;
@end

