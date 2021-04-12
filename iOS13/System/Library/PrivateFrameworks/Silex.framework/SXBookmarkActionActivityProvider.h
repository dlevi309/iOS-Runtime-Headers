/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXBookmarkManager;
@class NSString;

@interface SXBookmarkActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXBookmarkManager> _bookmarkManager;

}

@property (nonatomic,readonly) id<SXBookmarkManager> bookmarkManager;              //@synthesize bookmarkManager=_bookmarkManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXBookmarkManager>)bookmarkManager;
-(id)activityGroupForAction:(id)arg1 ;
-(id)initWithBookmarkManager:(id)arg1 ;
@end

