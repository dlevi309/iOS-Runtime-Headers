/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;
@end

