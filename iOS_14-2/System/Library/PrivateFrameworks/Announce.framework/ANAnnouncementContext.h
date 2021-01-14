/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, NSNumber;

@interface ANAnnouncementContext : NSObject <NSSecureCoding> {

	BOOL _announcerIsAccessory;
	BOOL _played;
	int _deviceClass;
	NSString* _announcementID;
	NSString* _groupID;
	NSString* _announcerID;
	NSString* _announcerName;
	NSString* _announcerUserID;
	NSString* _homeName;
	NSString* _homeID;
	int _productType;
	NSDictionary* _rooms;
	NSDictionary* _zones;
	NSURL* _announcementAudioURL;
	NSString* _announcementAudioPath;
	NSNumber* _audioFileDuration;
	NSString* _subtitle;
	NSString* _transcriptionText;

}

@property (nonatomic,readonly) NSString * announcementID;                     //@synthesize announcementID=_announcementID - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                            //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSString * announcerID;                        //@synthesize announcerID=_announcerID - In the implementation block
@property (nonatomic,readonly) NSString * announcerName;                      //@synthesize announcerName=_announcerName - In the implementation block
@property (nonatomic,readonly) NSString * announcerUserID;                    //@synthesize announcerUserID=_announcerUserID - In the implementation block
@property (nonatomic,readonly) BOOL announcerIsAccessory;                     //@synthesize announcerIsAccessory=_announcerIsAccessory - In the implementation block
@property (nonatomic,readonly) NSString * homeName;                           //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,readonly) NSString * homeID;                             //@synthesize homeID=_homeID - In the implementation block
@property (nonatomic,readonly) int productType;                               //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) int deviceClass;                               //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * rooms;                          //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,readonly) NSDictionary * zones;                          //@synthesize zones=_zones - In the implementation block
@property (nonatomic,readonly) NSURL * announcementAudioURL;                  //@synthesize announcementAudioURL=_announcementAudioURL - In the implementation block
@property (nonatomic,readonly) NSString * announcementAudioPath;              //@synthesize announcementAudioPath=_announcementAudioPath - In the implementation block
@property (nonatomic,readonly) NSNumber * audioFileDuration;                  //@synthesize audioFileDuration=_audioFileDuration - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * transcriptionText;                  //@synthesize transcriptionText=_transcriptionText - In the implementation block
@property (nonatomic,readonly) BOOL played;                                   //@synthesize played=_played - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextDictionary; 
+(BOOL)supportsSecureCoding;
+(id)contextFromDictionary:(id)arg1 ;
+(id)contextFromUserInfo:(id)arg1 ;
-(NSString *)homeID;
-(NSDictionary *)zones;
-(NSDictionary *)rooms;
-(int)productType;
-(NSDictionary *)contextDictionary;
-(NSString *)groupID;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(int)deviceClass;
-(BOOL)played;
-(BOOL)isEqualToContext:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithUserInfo:(id)arg1 ;
-(NSString *)announcerName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeName;
-(NSString *)announcementID;
-(NSString *)announcerUserID;
-(NSURL *)announcementAudioURL;
-(NSString *)transcriptionText;
-(NSString *)announcerID;
-(BOOL)announcerIsAccessory;
-(NSString *)announcementAudioPath;
-(NSNumber *)audioFileDuration;
@end

