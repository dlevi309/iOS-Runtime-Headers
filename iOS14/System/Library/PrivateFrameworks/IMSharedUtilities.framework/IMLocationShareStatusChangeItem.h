/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	BOOL _actionable;
	BOOL _expired;
	long long _status;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	long long _direction;

}

@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL actionable;                            //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) BOOL expired;                               //@synthesize expired=_expired - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(NSString *)otherHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpired:(BOOL)arg1 ;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOtherHandle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)actionable;
-(void)setActionable:(BOOL)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)expired;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyDictionaryRepresentation;
-(BOOL)isLastMessageCandidate;
-(long long)status;
-(void)dealloc;
@end
