/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(NSString *)avatarRecordIdentifier;
-(NSString *)stickerConfigurationIdentifier;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarRecordIdentifier;                      //@synthesize avatarRecordIdentifier=_avatarRecordIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerConfigurationIdentifier;              //@synthesize stickerConfigurationIdentifier=_stickerConfigurationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSNumber *)serializationVersion;
-(NSString *)avatarRecordIdentifier;
-(NSString *)stickerConfigurationIdentifier;
-(id)initWithIdentifier:(id)arg1 avatarRecordIdentifier:(id)arg2 stickerConfigurationIdentifier:(id)arg3 frequencySum:(id)arg4 serializationVersion:(id)arg5 ;
-(NSNumber *)frequencySum;
@end

