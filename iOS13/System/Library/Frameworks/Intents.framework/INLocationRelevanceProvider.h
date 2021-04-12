/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INRelevanceProvider.h>

@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider {

	CLRegion* _region;

}

@property (nonatomic,copy,readonly) CLRegion * region;              //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLRegion *)region;
-(id)initWithRegion:(id)arg1 ;
@end

