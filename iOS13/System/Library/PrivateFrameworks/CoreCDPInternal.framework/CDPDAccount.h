/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@interface CDPDAccount : NSObject

@property (assign,nonatomic) BOOL hasDisabledKeychainExplicitly; 
+(id)sharedInstance;
-(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(BOOL)hasDisabledKeychainExplicitly;
-(void)setHasDisabledKeychainExplicitly:(BOOL)arg1 ;
@end

