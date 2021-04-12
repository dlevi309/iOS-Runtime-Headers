/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {

	BOOL _shouldSync;

}

@property (nonatomic,readonly) BOOL shouldSync;              //@synthesize shouldSync=_shouldSync - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldSync;
-(id)typeDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
@end

