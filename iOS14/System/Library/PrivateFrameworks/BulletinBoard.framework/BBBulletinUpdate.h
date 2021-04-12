/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,copy,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) unsigned long long feeds;                //@synthesize feeds=_feeds - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)feeds;
-(void)encodeWithCoder:(id)arg1 ;
-(BBBulletin *)bulletin;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)typeDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
@end

