/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString;

@interface CKDPCSIdentityWrapper : NSObject {

	NSString* _identityString;
	PCSIdentitySetDataRef _identitySet;
	NSString* _primaryServiceName;

}

@property (nonatomic,readonly) PCSIdentitySetDataRef identitySet;              //@synthesize identitySet=_identitySet - In the implementation block
@property (nonatomic,readonly) NSString * primaryServiceName;                  //@synthesize primaryServiceName=_primaryServiceName - In the implementation block
@property (nonatomic,readonly) NSString * identityString;                      //@synthesize identityString=_identityString - In the implementation block
-(NSString *)primaryServiceName;
-(void)dealloc;
-(PCSIdentitySetDataRef)identitySet;
-(id)initWithIdentitySet:(PCSIdentitySetDataRef)arg1 withPrimaryServiceName:(id)arg2 ;
-(NSString *)identityString;
@end

