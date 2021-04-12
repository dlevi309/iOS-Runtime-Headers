/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class UIImage, NSString;

@interface WBSTouchIconFetchOperationResult : NSObject {

	BOOL _favicon;
	BOOL _pageRequestDidSucceed;
	BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
	UIImage* _touchIcon;
	NSString* _host;

}

@property (nonatomic,readonly) UIImage * touchIcon;                                                 //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (getter=isFavicon,nonatomic,readonly) BOOL favicon;                                       //@synthesize favicon=_favicon - In the implementation block
@property (nonatomic,readonly) BOOL pageRequestDidSucceed;                                          //@synthesize pageRequestDidSucceed=_pageRequestDidSucceed - In the implementation block
@property (nonatomic,readonly) BOOL higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
+(id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(BOOL)arg2 ;
+(id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(BOOL)arg3 pageRequestDidSucceed:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(NSString *)host;
-(UIImage *)touchIcon;
-(BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
-(BOOL)pageRequestDidSucceed;
-(id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(BOOL)arg3 pageRequestDidSucceed:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(BOOL)isFavicon;
@end

