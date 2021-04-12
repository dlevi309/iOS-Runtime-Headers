/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL, EKObjectID, EKSource;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {

	long long _type;
	NSString* _title;
	NSString* _name;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _URL;
	EKObjectID* _objectID;
	CGColorRef _dotColor;
	BOOL _hiddenFromNotificationCenter;
	BOOL _alerted;
	BOOL _couldBeJunk;
	EKSource* _source;
	NSString* _firstName;
	NSString* _lastName;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) EKObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) CGColorRef dotColor;                            //@synthesize dotColor=_dotColor - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromNotificationCenter;              //@synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL alerted;                                   //@synthesize alerted=_alerted - In the implementation block
@property (nonatomic,readonly) BOOL needsAlert; 
@property (assign,nonatomic) BOOL couldBeJunk;                               //@synthesize couldBeJunk=_couldBeJunk - In the implementation block
@property (nonatomic,retain) EKSource * source;                              //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(id)titleStringWithOptions:(unsigned long long)arg1 ;
-(id)importantDescriptionStringWithOptions:(unsigned long long)arg1 ;
-(id)senderStringWithOptions:(unsigned long long)arg1 ;
-(id)_identityStringWithOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setSource:(EKSource *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(EKSource *)source;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(id)initWithType:(long long)arg1 ;
-(EKObjectID *)objectID;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)couldBeJunk;
-(BOOL)alerted;
-(void)setHiddenFromNotificationCenter:(BOOL)arg1 ;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setDotColor:(CGColorRef)arg1 ;
-(void)setCouldBeJunk:(BOOL)arg1 ;
-(BOOL)needsAlert;
-(CGColorRef)dotColor;
-(BOOL)hiddenFromNotificationCenter;
@end

