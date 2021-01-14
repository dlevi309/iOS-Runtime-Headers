/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXConditionValidationContext.h>
@class NSString;


@protocol SXConditionValidationContext <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) NSString * contentSizeCategory; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) BOOL testing; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@property (getter=isBundleSubscriber,nonatomic,readonly) BOOL bundleSubscriber; 
@property (getter=isBundleTrialEligible,nonatomic,readonly) BOOL bundleTrialEligible; 
@property (getter=isChannelSubscriber,nonatomic,readonly) BOOL channelSubscriber; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) double contentScaleFactor; 
@property (nonatomic,readonly) unsigned long long newsletterSubscriptionStatus; 
@required
-(long long)userInterfaceStyle;
-(BOOL)isBundleSubscriber;
-(CGSize)viewportSize;
-(NSString *)contentSizeCategory;
-(unsigned long long)numberOfColumns;
-(double)contentScaleFactor;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(BOOL)testing;
-(unsigned long long)newsletterSubscriptionStatus;
-(unsigned long long)viewingLocation;
-(BOOL)isChannelSubscriber;
-(BOOL)isBundleTrialEligible;

@end


@class NSString, SXLayoutOptions;

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext> {

	SXLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                                    //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) NSString * contentSizeCategory; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) BOOL testing; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@property (getter=isBundleSubscriber,nonatomic,readonly) BOOL bundleSubscriber; 
@property (getter=isBundleTrialEligible,nonatomic,readonly) BOOL bundleTrialEligible; 
@property (getter=isChannelSubscriber,nonatomic,readonly) BOOL channelSubscriber; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) double contentScaleFactor; 
@property (nonatomic,readonly) unsigned long long newsletterSubscriptionStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)userInterfaceStyle;
-(BOOL)isBundleSubscriber;
-(CGSize)viewportSize;
-(NSString *)contentSizeCategory;
-(unsigned long long)numberOfColumns;
-(double)contentScaleFactor;
-(long long)verticalSizeClass;
-(SXLayoutOptions *)layoutOptions;
-(long long)horizontalSizeClass;
-(BOOL)testing;
-(id)initWithLayoutOptions:(id)arg1 ;
-(unsigned long long)newsletterSubscriptionStatus;
-(unsigned long long)viewingLocation;
-(BOOL)isChannelSubscriber;
-(BOOL)isBundleTrialEligible;
@end

