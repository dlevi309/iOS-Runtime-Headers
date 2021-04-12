/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)shortVersionString;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
-(NSData *)badgeIconData;
-(id)initWithInstalledApplication:(id)arg1 ;
-(void)setBadgeIconData:(NSData *)arg1 ;
-(void)setShortVersionString:(NSString *)arg1 ;
@end

