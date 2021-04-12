/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/VOSSoundPack.h>

@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>

@property (nonatomic,readonly) NSDictionary * eventToSoundFilenameMapping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)eventToSoundFilenameMapping;
-(id)soundAssetURLForOutputEvent:(id)arg1 ;
@end

