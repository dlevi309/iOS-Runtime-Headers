/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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

