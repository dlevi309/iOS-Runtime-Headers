/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {

	short _originalExifOrientation;
	NSString* _originalAssetsUUID;
	long long _originalHeight;
	long long _originalWidth;
	NSString* _originalFilename;
	unsigned long long _originalFilesize;
	NSTimeZone* _timeZone;
	long long _timeZoneOffset;

}

@property (nonatomic,readonly) NSString * originalAssetsUUID;                    //@synthesize originalAssetsUUID=_originalAssetsUUID - In the implementation block
@property (nonatomic,readonly) long long originalHeight;                         //@synthesize originalHeight=_originalHeight - In the implementation block
@property (nonatomic,readonly) long long originalWidth;                          //@synthesize originalWidth=_originalWidth - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) short originalExifOrientation;                    //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFilesize;              //@synthesize originalFilesize=_originalFilesize - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) long long timeZoneOffset;                         //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(NSTimeZone *)timeZone;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(short)originalExifOrientation;
-(long long)originalHeight;
-(unsigned long long)originalFilesize;
-(NSString *)originalAssetsUUID;
-(NSString *)originalFilename;
-(long long)originalWidth;
-(long long)timeZoneOffset;
@end

