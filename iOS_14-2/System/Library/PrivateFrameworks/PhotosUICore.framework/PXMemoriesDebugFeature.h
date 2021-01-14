/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXProtoFeature.h>

@class NSString, NSArray, UIColor;

@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature> {

	NSString* _featureLocalizedTitle;
	UIColor* _featureTintColor;
	unsigned long long _type;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedTypeStringValue; 
@property (nonatomic,readonly) long long featureKind; 
@property (nonatomic,readonly) long long featureGroupIndex; 
@property (nonatomic,readonly) NSString * featureLocalizedTitle;                 //@synthesize featureLocalizedTitle=_featureLocalizedTitle - In the implementation block
@property (nonatomic,readonly) NSArray * featurePeople; 
@property (nonatomic,readonly) double featureScore; 
@property (nonatomic,readonly) UIColor * featureTintColor;                       //@synthesize featureTintColor=_featureTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * featureSelectedTintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tintColorForFeatureType:(unsigned long long)arg1 ;
-(NSString *)localizedTitle;
-(unsigned long long)type;
-(long long)featureKind;
-(NSString *)featureLocalizedTitle;
-(UIColor *)featureTintColor;
-(long long)featureGroupIndex;
-(id)initWithLocalizedTitle:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)localizedTypeStringValue;
@end

