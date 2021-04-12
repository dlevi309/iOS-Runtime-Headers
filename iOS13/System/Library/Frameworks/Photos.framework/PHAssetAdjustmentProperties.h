/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	unsigned long long _originalResourceChoice;

}

@property (nonatomic,readonly) NSString * formatIdentifier;                            //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * formatVersion;                               //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long originalResourceChoice;              //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)formatVersion;
-(unsigned long long)originalResourceChoice;
-(NSString *)formatIdentifier;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

