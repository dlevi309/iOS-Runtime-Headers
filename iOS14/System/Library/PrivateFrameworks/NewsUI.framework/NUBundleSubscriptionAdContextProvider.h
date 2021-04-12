/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSArray, NSString;

@interface NUBundleSubscriptionAdContextProvider : NSObject <NUAdContextProvider> {

	BOOL _bundleSubscriber;
	NSArray* _bundleIAPs;

}

@property (getter=isBundleSubscriber,nonatomic,readonly) BOOL bundleSubscriber;              //@synthesize bundleSubscriber=_bundleSubscriber - In the implementation block
@property (nonatomic,copy) NSArray * bundleIAPs;                                             //@synthesize bundleIAPs=_bundleIAPs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBundleSubscriber;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithBundleSubscriber:(BOOL)arg1 bundleIAPs:(id)arg2 ;
-(NSArray *)bundleIAPs;
-(void)setBundleIAPs:(NSArray *)arg1 ;
@end

