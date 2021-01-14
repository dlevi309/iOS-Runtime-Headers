/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applyBookmark:(id)arg1 ;
-(id)initWithScrollPositionRestoring:(id)arg1 ;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
@end

