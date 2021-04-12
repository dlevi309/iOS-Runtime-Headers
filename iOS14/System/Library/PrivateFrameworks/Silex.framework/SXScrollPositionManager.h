/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXScrollPositionManager.h>

@protocol SXScrollPositionManager <SXScrollPositionRestoring>
@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring; 
@required
-(void)setScrollPositionRestoring:(id)arg1;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;

@end


@protocol SXScrollPositionRestoring;
@class NSString;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager> {

	id<SXScrollPositionRestoring> _scrollPositionRestoring;

}

@property (assign,nonatomic,__weak) id<SXScrollPositionRestoring> scrollPositionRestoring;              //@synthesize scrollPositionRestoring=_scrollPositionRestoring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollPositionRestoring:(id<SXScrollPositionRestoring>)arg1 ;
-(void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(id<SXScrollPositionRestoring>)scrollPositionRestoring;
@end

