/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {

	unsigned long long _type;
	id _home;
	NSArray* _zones;
	NSArray* _rooms;
	NSString* _announcementIdentifier;

}

@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id home;                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSArray * zones;                                //@synthesize zones=_zones - In the implementation block
@property (nonatomic,retain) NSArray * rooms;                                //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,retain) NSString * announcementIdentifier;              //@synthesize announcementIdentifier=_announcementIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)destinationWithHomeName:(id)arg1 zoneNames:(id)arg2 roomNames:(id)arg3 ;
+(id)destinationWithHomeIdentifier:(id)arg1 zoneIdentifiers:(id)arg2 roomIdentifiers:(id)arg3 ;
+(id)destinationWithReplyToAnnouncementIdentifier:(id)arg1 ;
+(id)destinationWithHome:(id)arg1 zones:(id)arg2 rooms:(id)arg3 ;
-(NSArray *)zones;
-(id)init;
-(NSArray *)rooms;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setZones:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHome:(id)arg1 ;
-(id)home;
-(void)setRooms:(NSArray *)arg1 ;
-(NSString *)announcementIdentifier;
-(BOOL)replyToSender;
-(void)setReplyToSender:(BOOL)arg1 ;
-(void)setAnnouncementIdentifier:(NSString *)arg1 ;
@end

