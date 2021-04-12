/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet {

	NSNumber* _inferredTimeZoneOffset;

}

@property (nonatomic,readonly) NSNumber * inferredTimeZoneOffset;              //@synthesize inferredTimeZoneOffset=_inferredTimeZoneOffset - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSNumber *)inferredTimeZoneOffset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

