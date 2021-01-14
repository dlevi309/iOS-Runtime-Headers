/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBBundleIDMapping, NSDictionary;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBBundleIDMapping* _pbBundleIDMapping;
	NSDictionary* _bundleIDMapping;

}

@property (nonatomic,retain) NSDictionary * bundleIDMapping;              //@synthesize bundleIDMapping=_bundleIDMapping - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)decendingSpecificityBundleIDsForBundleID:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)jsonEncodableObject;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPBBundleIDMapping:(id)arg1 ;
-(NSDictionary *)bundleIDMapping;
-(id)tagScoresForBundleID:(id)arg1 ;
-(void)setBundleIDMapping:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

