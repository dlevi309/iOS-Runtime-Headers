/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSSecureCoding;
@class NSString, NSDate, AMSXDDevice, NSDictionary;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isReply;
	NSString* _objectClassName;
	NSString* _messageID;
	NSDate* _receiptDate;
	AMSXDDevice* _destination;
	double _expirationInterval;
	NSString* _identifier;
	NSString* _logKey;
	id<NSObject><NSSecureCoding> _object;
	AMSXDDevice* _origin;
	long long _purpose;

}

@property (nonatomic,retain) NSString * objectClassName;                       //@synthesize objectClassName=_objectClassName - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                     //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,retain) NSString * messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSDate * receiptDate;                             //@synthesize receiptDate=_receiptDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * JSONDictionary; 
@property (nonatomic,retain) AMSXDDevice * destination;                        //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) double expirationInterval;                        //@synthesize expirationInterval=_expirationInterval - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * logKey;                                //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) id<NSObject><NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AMSXDDevice * origin;                             //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageFromProtoMessage:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSSecureCoding>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id<NSObject><NSSecureCoding>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(AMSXDDevice *)destination;
-(void)setDestination:(AMSXDDevice *)arg1 ;
-(AMSXDDevice *)origin;
-(void)setPurpose:(long long)arg1 ;
-(long long)purpose;
-(BOOL)isExpired;
-(void)setOrigin:(AMSXDDevice *)arg1 ;
-(void)setExpirationInterval:(double)arg1 ;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(double)expirationInterval;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4 ;
-(NSDictionary *)JSONDictionary;
-(BOOL)isReply;
-(NSString *)objectClassName;
-(NSDate *)receiptDate;
-(id)createProtoMessage;
-(void)setObjectClassName:(NSString *)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(void)setReceiptDate:(NSDate *)arg1 ;
@end

