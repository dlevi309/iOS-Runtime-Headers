/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@interface CDPDAccount : NSObject

@property (assign,nonatomic) BOOL hasDisabledKeychainExplicitly; 
+(id)sharedInstance;
-(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(BOOL)hasDisabledKeychainExplicitly;
-(void)setHasDisabledKeychainExplicitly:(BOOL)arg1 ;
@end

