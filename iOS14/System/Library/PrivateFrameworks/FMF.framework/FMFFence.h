/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CLLocation, FMFPlacemark, NSArray, FMFSchedule, NSDate;

@interface FMFFence : NSObject <NSCopying, NSSecureCoding> {

	BOOL _active;
	BOOL _recurring;
	BOOL _fromMe;
	NSString* _identifier;
	NSString* _label;
	CLLocation* _location;
	FMFPlacemark* _placemark;
	NSArray* _recipients;
	NSArray* _followerIds;
	NSString* _trigger;
	NSString* _type;
	unsigned long long _locationType;
	NSString* _acceptanceStatus;
	FMFSchedule* _schedule;
	NSDate* _muteEndDate;
	NSString* _ckRecordName;
	NSString* _ckRecordZoneOwnerName;
	NSDate* _timestamp;
	NSString* _friendIdentifier;
	NSString* _createdByIdentifier;
	NSString* _pendingIdentifier;

}

@property (nonatomic,readonly) NSString * displayLocationName; 
@property (nonatomic,retain) NSDate * timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSArray * followerIds;                                              //@synthesize followerIds=_followerIds - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * friendIdentifier;                                        //@synthesize friendIdentifier=_friendIdentifier - In the implementation block
@property (nonatomic,retain) NSString * createdByIdentifier;                                     //@synthesize createdByIdentifier=_createdByIdentifier - In the implementation block
@property (nonatomic,retain) NSString * pendingIdentifier;                                       //@synthesize pendingIdentifier=_pendingIdentifier - In the implementation block
@property (nonatomic,retain) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) FMFPlacemark * placemark;                                           //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                               //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSString * trigger;                                                 //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) NSString * type;                                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long locationType;                                    //@synthesize locationType=_locationType - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (assign,getter=isRecurring,nonatomic) BOOL recurring;                                  //@synthesize recurring=_recurring - In the implementation block
@property (assign,getter=isFromMe,nonatomic) BOOL fromMe;                                        //@synthesize fromMe=_fromMe - In the implementation block
@property (nonatomic,retain) FMFSchedule * schedule;                                             //@synthesize schedule=_schedule - In the implementation block
@property (nonatomic,retain) NSDate * muteEndDate;                                               //@synthesize muteEndDate=_muteEndDate - In the implementation block
@property (nonatomic,retain) NSString * ckRecordName;                                            //@synthesize ckRecordName=_ckRecordName - In the implementation block
@property (nonatomic,retain) NSString * ckRecordZoneOwnerName;                                   //@synthesize ckRecordZoneOwnerName=_ckRecordZoneOwnerName - In the implementation block
@property (nonatomic,retain) NSString * acceptanceStatus;                                        //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (getter=isRegionAllowed,nonatomic,readonly) BOOL regionAllowed; 
@property (getter=isOnMe,nonatomic,readonly) BOOL onMe; 
@property (getter=isSupported,readonly) BOOL supported; 
@property (getter=shouldUseCloudKitStore,nonatomic,readonly) BOOL useCloudKitStore; 
@property (getter=shouldUseIDSTrigger,nonatomic,readonly) BOOL useIDSTrigger; 
@property (getter=isMuted,nonatomic,readonly) BOOL isMuted; 
@property (getter=inviteDate,nonatomic,readonly) NSDate * inviteDate; 
+(BOOL)supportsSecureCoding;
+(id)genericFriendName;
+(id)endDateForMuteTimespan:(unsigned long long)arg1 ;
+(BOOL)isAllowedAtLocation:(CLLocationCoordinate2D)arg1 ;
-(NSArray *)recipients;
-(BOOL)isSupported;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)trigger;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setAcceptanceStatus:(NSString *)arg1 ;
-(NSString *)acceptanceStatus;
-(NSDate *)timestamp;
-(CLLocation *)location;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTrigger:(NSString *)arg1 ;
-(void)setLocationType:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setPlacemark:(FMFPlacemark *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)description;
-(BOOL)isOnMe;
-(FMFSchedule *)schedule;
-(unsigned long long)locationType;
-(BOOL)isFromMe;
-(NSString *)type;
-(NSString *)ckRecordName;
-(void)setCkRecordName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(FMFPlacemark *)placemark;
-(void)setSchedule:(FMFSchedule *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isMuted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isRecurring;
-(NSString *)pendingIdentifier;
-(NSString *)displayLocationName;
-(id)localizedNotificationStringForFollower:(id)arg1 locationName:(id)arg2 ;
-(id)localizedRequestNotificationStringForFollower:(id)arg1 locationName:(id)arg2 ;
-(id)localizedWillBeNotifiedStringForFollower:(id)arg1 locationName:(id)arg2 ;
-(id)localizedSubtitleStringWithLocationName:(id)arg1 ;
-(void)setRecurring:(BOOL)arg1 ;
-(void)setPendingIdentifier:(NSString *)arg1 ;
-(void)setFromMe:(BOOL)arg1 ;
-(void)setCreatedByIdentifier:(NSString *)arg1 ;
-(void)setFollowerIds:(NSArray *)arg1 ;
-(void)setFriendIdentifier:(NSString *)arg1 ;
-(id)locationForDictionary:(id)arg1 ;
-(id)handlesForArray:(id)arg1 ;
-(void)setCkRecordZoneOwnerName:(NSString *)arg1 ;
-(void)setMuteEndDate:(NSDate *)arg1 ;
-(NSDate *)muteEndDate;
-(BOOL)shouldUseIDSTrigger;
-(NSString *)friendIdentifier;
-(NSArray *)followerIds;
-(NSString *)ckRecordZoneOwnerName;
-(id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(BOOL)arg8 ;
-(NSDate *)inviteDate;
-(BOOL)shouldUseCloudKitStore;
-(BOOL)isRegionAllowed;
-(void)updateFenceLocation:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(unsigned long long)arg6 ;
-(void)updateFenceMuteEndDate:(id)arg1 ;
-(NSString *)createdByIdentifier;
@end

