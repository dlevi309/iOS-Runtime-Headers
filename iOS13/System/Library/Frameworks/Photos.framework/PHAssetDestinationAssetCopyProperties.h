/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet {

	long long _destinationAssetCopyState;

}

@property (nonatomic,readonly) long long destinationAssetCopyState;              //@synthesize destinationAssetCopyState=_destinationAssetCopyState - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)destinationAssetCopyState;
@end

