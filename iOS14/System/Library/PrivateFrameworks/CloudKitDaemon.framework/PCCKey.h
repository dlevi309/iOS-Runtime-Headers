/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface PCCKey : NSObject {

	pcc_invocation_key* _secret;

}

@property (assign) pcc_invocation_key* secret;              //@synthesize secret=_secret - In the implementation block
-(void)clear;
-(id)init;
-(pcc_invocation_key*)secret;
-(id)decrypt:(id)arg1 ;
-(void)dealloc;
-(void)setSecret:(pcc_invocation_key*)arg1 ;
-(id)encrypt:(id)arg1 ;
@end

