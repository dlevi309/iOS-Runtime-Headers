/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOrigin:(AMSXDDevice *)arg1 ;
-(void)setObjectClassName:(NSString *)arg1 ;
-(void)setDestination:(AMSXDDevice *)arg1 ;
-(long long)purpose;
-(void)setPurpose:(long long)arg1 ;
-(AMSXDDevice *)origin;
-(void)setMessageID:(NSString *)arg1 ;
-(double)expirationInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(id<NSObject><NSSecureCoding>)object;
-(void)setObject:(id<NSObject><NSSecureCoding>)arg1 ;
-(id)description;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)JSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)createProtoMessage;
-(void)setReceiptDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)objectClassName;
-(NSString *)messageID;
-(void)setExpirationInterval:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isReply;
-(AMSXDDevice *)destination;
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4 ;
-(NSString *)logKey;
-(NSDate *)receiptDate;
-(void)setIsReply:(BOOL)arg1 ;
@end

