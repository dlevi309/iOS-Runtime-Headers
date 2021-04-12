/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutOptionsFactory.h>

@protocol SXLayoutOptionsFactory <NSObject>
@required
-(id)createLayoutOptionsWithViewportSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9;

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
-(id)createLayoutOptionsWithViewportSize:(CGSize)arg1 safeAreaInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 ;
-(id)initWithColumnCalculator:(id)arg1 documentProvider:(id)arg2 ;
@end

