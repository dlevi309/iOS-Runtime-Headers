/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRKApplication : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _name;
	NSData* _iconData;
	NSData* _badgeIconData;
	NSString* _shortVersionString;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSData * iconData;                        //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSData * badgeIconData;                   //@synthesize badgeIconData=_badgeIconData - In the implementation block
@property (nonatomic,copy) NSString * shortVersionString;              //@synthesize shortVersionString=_shortVersionString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)iconData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(NSString *)shortVersionString;
-(NSData *)badgeIconData;
-(void)setBadgeIconData:(NSData *)arg1 ;
-(void)setShortVersionString:(NSString *)arg1 ;
@end

