/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)sceneIdentifier;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)application;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithApplication:(id)arg1 sceneIdentifier:(id)arg2 ;
@end

