/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_group;
@class MDSearchQuery, NSArray, NSMutableDictionary, NSObject, IMChatRegistry, NSString;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate> {

	MDSearchQuery* _currentQuery;
	unsigned long long _resultIndex;
	NSArray* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject*<OS_dispatch_group> _searchResultLoadingGroup;
	/*^block*/id _completion;
	BOOL _cancelled;
	IMChatRegistry* _chatRegisteryOverride;

}

@property (nonatomic,retain) IMChatRegistry * chatRegisteryOverride;              //@synthesize chatRegisteryOverride=_chatRegisteryOverride - In the implementation block
@property (nonatomic,readonly) MDSearchQuery * currentQuery;                      //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(MDSearchQuery *)currentQuery;
-(void)_cleanup;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)chatRegistry;
-(id)completion;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_callCompletion;
-(void)_processSearchResults;
-(void)setChatRegisteryOverride:(IMChatRegistry *)arg1 ;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/id)arg2 startQuery:(BOOL)arg3 ;
-(id)initWithSearchText:(id)arg1 chatRegistryOverride:(id)arg2 startQuery:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(IMChatRegistry *)chatRegisteryOverride;
-(void)cancel;
-(void)dealloc;
@end

