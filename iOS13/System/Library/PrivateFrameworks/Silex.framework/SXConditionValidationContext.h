/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@required
-(double)contentScaleFactor;
-(unsigned long long)numberOfColumns;
-(NSString *)contentSizeCategory;
-(long long)verticalSizeClass;
-(long long)userInterfaceStyle;
-(long long)horizontalSizeClass;
-(BOOL)testing;
-(BOOL)isBundleSubscriber;
-(CGSize)viewportSize;
-(unsigned long long)viewingLocation;
-(BOOL)isChannelSubscriber;
-(BOOL)isBundleTrialEligible;

@end


@class NSString, SXLayoutOptions;

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext> {

	SXLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                                    //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(double)contentScaleFactor;
-(SXLayoutOptions *)layoutOptions;
-(unsigned long long)numberOfColumns;
-(NSString *)contentSizeCategory;
-(long long)verticalSizeClass;
-(long long)userInterfaceStyle;
-(long long)horizontalSizeClass;
-(BOOL)testing;
-(BOOL)isBundleSubscriber;
-(CGSize)viewportSize;
-(id)initWithLayoutOptions:(id)arg1 ;
-(unsigned long long)viewingLocation;
-(BOOL)isChannelSubscriber;
-(BOOL)isBundleTrialEligible;
@end

