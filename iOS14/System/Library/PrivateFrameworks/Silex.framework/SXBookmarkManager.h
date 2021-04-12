/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2 ;
-(id)init;
-(void)applyBookmark:(id)arg1 ;
-(NSMutableDictionary *)applicators;
@end

