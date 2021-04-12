/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

