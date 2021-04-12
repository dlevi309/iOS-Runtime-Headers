/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBApplication, NSString;

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {

	SBApplication* _application;
	NSString* _sceneIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier;               //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)sceneIdentifier;
-(id)application;
-(id)initWithApplication:(id)arg1 sceneIdentifier:(id)arg2 ;
@end

