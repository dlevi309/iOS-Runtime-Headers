/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTStickerRecord.h>
@class NSString;


@protocol AVTStickerRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * avatarRecordIdentifier; 
@property (nonatomic,copy,readonly) NSString * stickerConfigurationIdentifier; 
@required
-(NSString *)avatarRecordIdentifier;
-(NSString *)stickerConfigurationIdentifier;
-(NSString *)identifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _avatarRecordIdentifier;
	NSString* _stickerConfigurationIdentifier;
	NSNumber* _frequencySum;
	NSNumber* _serializationVersion;

}

@property (nonatomic,readonly) NSNumber * frequencySum;                                     //@synthesize frequencySum=_frequencySum - In the implementation block
@property (nonatomic,readonly) NSNumber * serializationVersion;                             //@synthesize serializationVersion=_serializationVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarRecordIdentifier;                      //@synthesize avatarRecordIdentifier=_avatarRecordIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerConfigurationIdentifier;              //@synthesize stickerConfigurationIdentifier=_stickerConfigurationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(NSNumber *)frequencySum;
-(NSNumber *)serializationVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)avatarRecordIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stickerConfigurationIdentifier;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 avatarRecordIdentifier:(id)arg2 stickerConfigurationIdentifier:(id)arg3 frequencySum:(id)arg4 serializationVersion:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

