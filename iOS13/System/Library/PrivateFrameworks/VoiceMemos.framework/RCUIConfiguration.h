/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RCUIConfiguration : NSObject <NSCopying> {

	NSString* _debugIdentifier;

}

@property (nonatomic,retain) NSString * debugIdentifier;              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
@end

