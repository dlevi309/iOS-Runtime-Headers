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

@interface IMGroupTitleChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	NSString* _title;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_newChatItems;
-(NSString *)otherHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOtherHandle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyDictionaryRepresentation;
-(void)dealloc;
@end

