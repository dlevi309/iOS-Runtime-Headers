/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INRelevanceProvider.h>

@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider {

	CLRegion* _region;

}

@property (nonatomic,copy,readonly) CLRegion * region;              //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLRegion *)region;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

