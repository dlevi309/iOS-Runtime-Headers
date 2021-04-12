/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHLibraryCategoryMapProviderSource.h>

@protocol SBHLibraryCategoryMapProviderSourceDelegate;
@class NSString, ATXAppDirectoryClient, NSArray;

@interface SBProactiveLibraryCategoryMapProviderSource : NSObject <SBHLibraryCategoryMapProviderSource> {

	ATXAppDirectoryClient* _appDirectoryClient;
	NSArray* _lastKnownGoodSuggestions;
	NSArray* _lastKnownGoodRecentApps;
	id<SBHLibraryCategoryMapProviderSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBHLibraryCategoryMapProviderSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sourceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBHLibraryCategoryMapProviderSourceDelegate>)delegate;
-(void)setDelegate:(id<SBHLibraryCategoryMapProviderSourceDelegate>)arg1 ;
-(void)requestLibraryCategoryMapWithOptions:(unsigned long long)arg1 existingLibraryCategoryMap:(id)arg2 forbiddenApplicationIdentifiers:(id)arg3 sessionId:(unsigned long long)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(NSString *)sourceName;
-(void)handleUpdateCategoriesNotification:(id)arg1 ;
@end

