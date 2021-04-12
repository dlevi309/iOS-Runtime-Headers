/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)typeDescription;
-(BBBulletin *)bulletin;
-(unsigned long long)feeds;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
@end

