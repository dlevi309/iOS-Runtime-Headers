/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate, NSData;

@interface GKQuickAction : NSObject <NSCoding, NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSDictionary* _imageURLDictionary;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _titleText;
	NSString* _subText;
	NSDate* _date;
	NSString* _gameBundleID;
	NSString* _launchURL;
	NSData* _imageData;

}

@property (retain) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDictionary * imageURLDictionary;              //@synthesize imageURLDictionary=_imageURLDictionary - In the implementation block
@property (retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (retain) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (retain) NSString * subText;                             //@synthesize subText=_subText - In the implementation block
@property (retain) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (retain) NSString * gameBundleID;                        //@synthesize gameBundleID=_gameBundleID - In the implementation block
@property (retain) NSString * launchURL;                           //@synthesize launchURL=_launchURL - In the implementation block
@property (retain) NSData * imageData;                             //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithSBSApplicationShortcutItem:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)shortcutItem;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)launchURL;
-(void)setLaunchURL:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithMatch:(id)arg1 ;
-(id)initWithChallenge:(id)arg1 ;
-(id)initWithInvite:(id)arg1 ;
-(void)setGameBundleID:(NSString *)arg1 ;
-(NSString *)gameBundleID;
-(void)setImageURLDictionary:(NSDictionary *)arg1 ;
-(void)setSubText:(NSString *)arg1 ;
-(NSString *)subText;
-(NSDictionary *)imageURLDictionary;
-(void)loadImageDataForDesiredSize:(long long)arg1 scale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)processAction;
@end

