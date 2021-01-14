/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNCapabilities.h>

@protocol CNCapabilities <NSObject>
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
@required
+(BOOL)shouldUseLegacyMessages;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldUseLegacyMessages;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;
@end

