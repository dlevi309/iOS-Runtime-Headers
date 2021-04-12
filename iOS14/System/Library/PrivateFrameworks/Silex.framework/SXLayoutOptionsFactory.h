/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutOptionsFactory.h>

@protocol SXLayoutOptionsFactory <NSObject>
@required
-(id)createLayoutOptionsWithViewportSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 newsletterSubscriptionStatus:(unsigned long long)arg10;

@end


@class SXColumnCalculator, SXDocumentProvider, NSString;

@interface SXLayoutOptionsFactory : NSObject <SXLayoutOptionsFactory> {

	SXColumnCalculator* _columnCalculator;
	SXDocumentProvider* _documentProvider;

}

@property (nonatomic,readonly) SXColumnCalculator * columnCalculator;              //@synthesize columnCalculator=_columnCalculator - In the implementation block
@property (nonatomic,readonly) SXDocumentProvider * documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXDocumentProvider *)documentProvider;
-(SXColumnCalculator *)columnCalculator;
-(id)initWithColumnCalculator:(id)arg1 documentProvider:(id)arg2 ;
-(id)createLayoutOptionsWithViewportSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 newsletterSubscriptionStatus:(unsigned long long)arg10 ;
@end

