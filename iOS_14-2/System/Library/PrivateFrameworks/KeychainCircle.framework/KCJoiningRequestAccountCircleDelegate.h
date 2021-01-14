/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

