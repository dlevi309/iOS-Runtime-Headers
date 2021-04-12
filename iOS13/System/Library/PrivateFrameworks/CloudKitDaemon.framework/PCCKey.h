/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface PCCKey : NSObject {

	pcc_invocation_key* _secret;

}

@property (assign) pcc_invocation_key* secret;              //@synthesize secret=_secret - In the implementation block
-(id)init;
-(void)dealloc;
-(void)clear;
-(pcc_invocation_key*)secret;
-(void)setSecret:(pcc_invocation_key*)arg1 ;
-(id)encrypt:(id)arg1 ;
-(id)decrypt:(id)arg1 ;
@end

