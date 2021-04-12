/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXScrollPositionManager.h>

@protocol SXScrollPositionManager <SXScrollPositionRestoring>
@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring; 
@required
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
-(void)setScrollPositionRestoring:(id)arg1;

@end


@protocol SXScrollPositionRestoring;
@class NSString;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager> {

	id<SXScrollPositionRestoring> _scrollPositionRestoring;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring;              //@synthesize scrollPositionRestoring=_scrollPositionRestoring - In the implementation block
-(void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
-(void)setScrollPositionRestoring:(id<SXScrollPositionRestoring>)arg1 ;
@end

