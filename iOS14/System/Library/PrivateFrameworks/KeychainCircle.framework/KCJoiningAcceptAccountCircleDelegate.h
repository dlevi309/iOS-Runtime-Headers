/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <libobjc.A.dylib/KCJoiningAcceptCircleDelegate.h>

@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegate;
-(id)circleJoinDataFor:(OpaqueSOSPeerInfoRef)arg1 error:(id*)arg2 ;
-(id)circleGetInitialSyncViews:(unsigned)arg1 error:(id*)arg2 ;
@end

