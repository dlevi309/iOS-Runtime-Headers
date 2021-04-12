/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSString, SUConcernItem, NSNumber;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _commentText;
	SUConcernItem* _concern;
	unsigned long long _itemIdentifier;

}

@property (retain) SUConcernItem * concern;                                                             //@synthesize concern=_concern - In the implementation block
@property (retain) NSString * commentText;                                                              //@synthesize commentText=_commentText - In the implementation block
@property (assign) unsigned long long itemIdentifier;                                                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)itemIdentifier;
-(void)run;
-(NSString *)commentText;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)setCommentText:(NSString *)arg1 ;
-(SUConcernItem *)concern;
-(id)_httpBody;
-(void)dealloc;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithConcern:(id)arg1 ;
-(void)setConcern:(SUConcernItem *)arg1 ;
@end

