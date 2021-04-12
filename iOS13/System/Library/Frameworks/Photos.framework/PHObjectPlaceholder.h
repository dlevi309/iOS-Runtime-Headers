/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	long long _assetMediaType;

}

@property (assign) long long assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localIdentifier;
-(id)initWithLocalIdentifier:(id)arg1 ;
-(long long)assetMediaType;
-(void)setAssetMediaType:(long long)arg1 ;
@end

