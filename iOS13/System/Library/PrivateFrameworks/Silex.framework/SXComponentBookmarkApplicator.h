/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXBookmarkApplicator.h>

@protocol SXScrollPositionRestoring;
@class NSString;

@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator> {

	id<SXScrollPositionRestoring> _scrollPositionRestoring;

}

@property (nonatomic,readonly) id<SXScrollPositionRestoring> scrollPositionRestoring;              //@synthesize scrollPositionRestoring=_scrollPositionRestoring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
-(void)applyBookmark:(id)arg1 ;
-(id)initWithScrollPositionRestoring:(id)arg1 ;
@end

