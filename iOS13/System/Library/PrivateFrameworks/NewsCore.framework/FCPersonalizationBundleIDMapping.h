/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonEncodableObject;
-(id)initWithPBBundleIDMapping:(id)arg1 ;
-(NSDictionary *)bundleIDMapping;
-(id)tagScoresForBundleID:(id)arg1 ;
-(void)setBundleIDMapping:(NSDictionary *)arg1 ;
@end

