/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>

@protocol SBMultiplexedSpotlightDelegate;
@class NSString;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate> {

	id<SBMultiplexedSpotlightDelegate> _delegates[3];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)activeDelegate;
-(void)dismissSearchView;
-(void)_modifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)setSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2 ;
-(void)removeSpotlightDelegateForLevel:(unsigned long long)arg1 ;
@end

