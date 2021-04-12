/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject {

	NSMapTable* _tokenToRequestToken;
	WBSSiteMetadataManager* _manager;
	long long _priority;
	CGSize _size;

}

@property (nonatomic,readonly) WBSSiteMetadataManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(long long)priority;
-(WBSSiteMetadataManager *)manager;
-(void)setPriority:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)_issueRequest:(id)arg1 isOneTime:(BOOL)arg2 withToken:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(BOOL)arg3 iconSize:(CGSize)arg4 isURLTypedByUser:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(BOOL)arg3 iconSize:(CGSize)arg4 isURLTypedByUser:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelAllRegistrationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSiteMetadataManager:(id)arg1 ;
-(void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerOneTimeRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelAllRegistrations;
@end

