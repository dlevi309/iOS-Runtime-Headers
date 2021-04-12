/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIPlaceholderProviderFactory.h>

@protocol CNUIPlaceholderProviderFactory <NSObject>
@required
-(id)loadingGroupPlaceholderProviderWithBackgroundStyle:(unsigned long long)arg1;
-(id)placeholderProvider;
-(id)loadingPlaceholderProvider;

@end


@protocol CNUIPRLikenessProvider, CNScheduler;
@class NSString;

@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory> {

	id<CNUIPRLikenessProvider> _placeholderProvider;
	id<CNUIPRLikenessProvider> _loadingPlaceholderProvider;
	id<CNUIPRLikenessProvider> _loadingGroupPlaceholderProvider;
	id<CNScheduler> _resourceLock;
	id<CNScheduler> _highPriorityLock;

}

@property (nonatomic,retain) id<CNScheduler> resourceLock;                                    //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,retain) id<CNScheduler> highPriorityLock;                                //@synthesize highPriorityLock=_highPriorityLock - In the implementation block
@property (readonly) id<CNUIPRLikenessProvider> placeholderProvider; 
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderProvider; 
@property (readonly) id<CNUIPRLikenessProvider> loadingGroupPlaceholderProvider;              //@synthesize loadingGroupPlaceholderProvider=_loadingGroupPlaceholderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResourceLock:(id<CNScheduler>)arg1 ;
-(id)init;
-(id)loadingGroupPlaceholderProviderWithBackgroundStyle:(unsigned long long)arg1 ;
-(id<CNUIPRLikenessProvider>)loadingGroupPlaceholderProvider;
-(id<CNScheduler>)resourceLock;
-(id<CNUIPRLikenessProvider>)placeholderProvider;
-(void)setHighPriorityLock:(id<CNScheduler>)arg1 ;
-(id<CNUIPRLikenessProvider>)loadingPlaceholderProvider;
-(id<CNScheduler>)highPriorityLock;
@end

