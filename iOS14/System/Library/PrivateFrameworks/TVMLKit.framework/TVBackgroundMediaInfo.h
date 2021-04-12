/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVMediaInfo.h>

@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo {

	IKAppPlayerBridge* _playerBridge;

}

@property (nonatomic,retain) IKAppPlayerBridge * playerBridge;              //@synthesize playerBridge=_playerBridge - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(IKAppPlayerBridge *)playerBridge;
-(void)setPlayerBridge:(IKAppPlayerBridge *)arg1 ;
@end

