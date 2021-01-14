/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@class MTMPUMutableFontDescriptor, NSMutableArray;

@interface MTMPUFontDescriptorCache : NSObject {

	MTMPUMutableFontDescriptor* _reusableMutableFontDescriptor;
	unsigned long long _maximumCapacity;
	NSMutableArray* _orderedCachedFontDescriptors;

}
+(id)sharedFontDescriptorCache;
-(id)init;
-(id)cachedImmutableFontDescriptorForConfigurationBlock:(/*^block*/id)arg1 ;
-(id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

