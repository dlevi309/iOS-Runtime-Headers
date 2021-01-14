/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	long long _assetMediaType;

}

@property (assign) long long assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(id)localIdentifier;
-(long long)assetMediaType;
-(id)initWithLocalIdentifier:(id)arg1 ;
-(void)setAssetMediaType:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

