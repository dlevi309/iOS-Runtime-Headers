/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding> {

	NSMutableDictionary* _anchorToVersion;
	NSMutableDictionary* _versionToAnchor;
	long long _currentFeatureVersion;

}

@property (nonatomic,readonly) long long currentFeatureVersion;              //@synthesize currentFeatureVersion=_currentFeatureVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCurrentFeatureVersion:(long long)arg1 ;
-(void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2 ;
-(id)syncAnchorForFeatureVersion:(long long)arg1 ;
-(long long)featureVersionForSyncAnchor:(id)arg1 ;
-(void)enumerateHistoryWithBlock:(/*^block*/id)arg1 ;
-(long long)currentFeatureVersion;
@end

