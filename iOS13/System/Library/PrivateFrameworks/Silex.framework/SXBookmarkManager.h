/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXBookmarkManager.h>

@protocol SXBookmarkManager
@required
-(void)applyBookmark:(id)arg1;

@end

#import <libobjc.A.dylib/SXBookmarkApplicatorManager.h>

@class NSMutableDictionary, NSString;

@interface SXBookmarkManager : NSObject <SXBookmarkManager, SXBookmarkApplicatorManager> {

	NSMutableDictionary* _applicators;

}

@property (nonatomic,readonly) NSMutableDictionary * applicators;              //@synthesize applicators=_applicators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)applyBookmark:(id)arg1 ;
-(void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2 ;
-(NSMutableDictionary *)applicators;
@end

