/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinAddUpdate : BBBulletinUpdate {

	BOOL _shouldPlayLightsAndSirens;

}

@property (nonatomic,readonly) BOOL shouldPlayLightsAndSirens;              //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)shouldPlayLightsAndSirens;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)typeDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 ;
@end

