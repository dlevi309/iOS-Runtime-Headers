/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXColumnLayout, UITraitCollection, NSString;

@interface SXLayoutOptions : NSObject {

	SXColumnLayout* _columnLayout;
	CGSize _viewportSize;
	UITraitCollection* _traitCollection;
	NSString* _contentSizeCategory;
	long long _bundleSubscriptionStatus;
	long long _channelSubscriptionStatus;
	BOOL _testing;
	unsigned long long _viewingLocation;
	double _contentScaleFactor;
	unsigned long long _newsletterSubscriptionStatus;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;                                //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                                          //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;                          //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSString * contentSizeCategory;                               //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,readonly) long long bundleSubscriptionStatus;                           //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) long long channelSubscriptionStatus;                          //@synthesize channelSubscriptionStatus=_channelSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) BOOL testing;                                                 //@synthesize testing=_testing - In the implementation block
@property (nonatomic,readonly) unsigned long long viewingLocation;                           //@synthesize viewingLocation=_viewingLocation - In the implementation block
@property (nonatomic,readonly) double contentScaleFactor;                                    //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (nonatomic,readonly) unsigned long long newsletterSubscriptionStatus;              //@synthesize newsletterSubscriptionStatus=_newsletterSubscriptionStatus - In the implementation block
-(UITraitCollection *)traitCollection;
-(CGSize)viewportSize;
-(NSString *)contentSizeCategory;
-(id)description;
-(double)contentScaleFactor;
-(unsigned long long)hash;
-(BOOL)testing;
-(long long)bundleSubscriptionStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)newsletterSubscriptionStatus;
-(long long)channelSubscriptionStatus;
-(SXColumnLayout *)columnLayout;
-(unsigned long long)viewingLocation;
-(unsigned long long)diffWithLayoutOptions:(id)arg1 ;
-(id)initWithColumnLayout:(id)arg1 viewportSize:(CGSize)arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 newsletterSubscriptionStatus:(unsigned long long)arg10 ;
@end

