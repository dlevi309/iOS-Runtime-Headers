/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVLoggingIdentifier.h>

@class AVAssetLoggingIdentifierInternal, NSString;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVAssetLoggingIdentifierInternal* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)makeDerivedIdentifier;
@end

