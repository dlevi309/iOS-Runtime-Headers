/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <libobjc.A.dylib/KCJoiningRequestCircleDelegate.h>

@class NSString;

@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegate;
-(OpaqueSOSPeerInfoRef)copyPeerInfoError:(id*)arg1 ;
-(BOOL)processCircleJoinData:(id)arg1 version:(int)arg2 error:(id*)arg3 ;
@end

