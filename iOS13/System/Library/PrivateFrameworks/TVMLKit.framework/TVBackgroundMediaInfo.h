/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVMediaInfo.h>

@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo {

	IKAppPlayerBridge* _playerBridge;

}

@property (nonatomic,retain) IKAppPlayerBridge * playerBridge;              //@synthesize playerBridge=_playerBridge - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKAppPlayerBridge *)playerBridge;
-(void)setPlayerBridge:(IKAppPlayerBridge *)arg1 ;
@end

