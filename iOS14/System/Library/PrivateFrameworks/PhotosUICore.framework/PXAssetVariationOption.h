/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXAssetVariationOption : NSObject <NSCopying> {

	BOOL _recommended;
	BOOL _current;
	long long _variationType;
	NSString* _localizedName;

}

@property (nonatomic,readonly) long long variationType;                            //@synthesize variationType=_variationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (getter=isRecommended,nonatomic,readonly) BOOL recommended;              //@synthesize recommended=_recommended - In the implementation block
@property (getter=isCurrent,nonatomic,readonly) BOOL current;                      //@synthesize current=_current - In the implementation block
+(id)_localizedNameForVariationType:(long long)arg1 ;
+(id)variationOptionWithType:(long long)arg1 recommended:(BOOL)arg2 current:(BOOL)arg3 ;
-(NSString *)localizedName;
-(BOOL)isRecommended;
-(BOOL)isEqualToVariationOption:(id)arg1 ;
-(long long)variationType;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCurrent;
-(BOOL)isEqual:(id)arg1 ;
@end

