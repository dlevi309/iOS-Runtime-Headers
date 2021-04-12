/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinAddUpdate : BBBulletinUpdate {

	BOOL _shouldPlayLightsAndSirens;

}

@property (nonatomic,readonly) BOOL shouldPlayLightsAndSirens;              //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)typeDescription;
-(BOOL)shouldPlayLightsAndSirens;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
@end

