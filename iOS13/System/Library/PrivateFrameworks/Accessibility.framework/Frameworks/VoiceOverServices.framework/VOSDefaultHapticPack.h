/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/VOSHapticPack.h>

@class NSDictionary, NSString;

@interface VOSDefaultHapticPack : NSObject <VOSHapticPack>

@property (nonatomic,readonly) NSDictionary * eventToHapticFilenameMapping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)eventToHapticFilenameMapping;
-(id)hapticAssetURLForOutputEvent:(id)arg1 ;
@end

