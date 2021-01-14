/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _anchorToVersion;
	NSMutableDictionary* _versionToAnchor;
	long long _currentFeatureVersion;

}

@property (nonatomic,readonly) long long currentFeatureVersion;              //@synthesize currentFeatureVersion=_currentFeatureVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurrentFeatureVersion:(long long)arg1 ;
-(void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2 ;
-(id)syncAnchorForFeatureVersion:(long long)arg1 ;
-(long long)featureVersionForSyncAnchor:(id)arg1 ;
-(void)enumerateHistoryWithBlock:(/*^block*/id)arg1 ;
-(long long)currentFeatureVersion;
@end

