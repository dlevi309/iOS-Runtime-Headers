/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CLLocation, FMFPlacemark, NSArray, NSDate;

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
@property (nonatomic,retain) NSString * ckRecordName;                                            //@synthesize ckRecordName=_ckRecordName - In the implementation block
@property (nonatomic,retain) NSString * ckRecordZoneOwnerName;                                   //@synthesize ckRecordZoneOwnerName=_ckRecordZoneOwnerName - In the implementation block
@property (nonatomic,retain) NSString * acceptanceStatus;                                        //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (getter=isRegionAllowed,nonatomic,readonly) BOOL regionAllowed; 
@property (getter=isOnMe,nonatomic,readonly) BOOL onMe; 
@property (getter=isSupported,readonly) BOOL supported; 
@property (getter=shouldUseCloudKitStore,nonatomic,readonly) BOOL useCloudKitStore; 
@property (getter=shouldUseIDSTrigger,nonatomic,readonly) BOOL useIDSTrigger; 
+(BOOL)supportsSecureCoding;
+(id)genericFriendName;
+(BOOL)isAllowedAtLocation:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSDate *)timestamp;
-(CLLocation *)location;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(FMFPlacemark *)placemark;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)trigger;
-(NSString *)ckRecordName;
-(void)setCkRecordName:(NSString *)arg1 ;
-(void)setAcceptanceStatus:(NSString *)arg1 ;
-(NSString *)acceptanceStatus;
-(void)setTrigger:(NSString *)arg1 ;
-(unsigned long long)locationType;
-(BOOL)isFromMe;
-(BOOL)isSupported;
-(void)setLocationType:(unsigned long long)arg1 ;
-(void)setPlacemark:(FMFPlacemark *)arg1 ;
-(BOOL)isRecurring;
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
-(BOOL)shouldUseIDSTrigger;
-(NSString *)pendingIdentifier;
-(NSString *)friendIdentifier;
-(NSArray *)followerIds;
-(NSString *)ckRecordZoneOwnerName;
-(id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(BOOL)arg8 ;
-(BOOL)isOnMe;
-(BOOL)shouldUseCloudKitStore;
-(BOOL)isRegionAllowed;
-(void)updateFenceLocation:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(unsigned long long)arg6 ;
-(NSString *)createdByIdentifier;
@end

