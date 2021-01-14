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

@interface IMMessageActionItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	long long _actionType;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	NSString* _originalMessageGUID;

}

@property (assign,nonatomic) long long actionType;                        //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                      //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;               //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                 //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
@property (nonatomic,retain) NSString * originalMessageGUID;              //@synthesize originalMessageGUID=_originalMessageGUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_newChatItems;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)otherHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setOtherHandle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)originalMessageGUID;
-(void)setOriginalMessageGUID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyDictionaryRepresentation;
-(void)dealloc;
@end

