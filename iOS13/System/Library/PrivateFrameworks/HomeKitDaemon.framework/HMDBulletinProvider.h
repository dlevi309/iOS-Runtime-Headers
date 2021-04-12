/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HMDBulletinProvider : HMFObject <NSSecureCoding> {

	NSMutableDictionary* _bulletins;

}

@property (nonatomic,retain) NSMutableDictionary * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)bulletins;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
@end

