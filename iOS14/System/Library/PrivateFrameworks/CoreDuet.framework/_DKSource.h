/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding> {

	NSString* _sourceID;
	NSString* _bundleID;
	NSString* _itemID;
	NSString* _groupID;
	NSString* _deviceID;
	NSNumber* _userID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * syncDeviceID; 
@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSNumber * userID;                               //@synthesize userID=_userID - In the implementation block
@property (readonly) NSString * sourceID;                           //@synthesize sourceID=_sourceID - In the implementation block
@property (readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSString * itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (readonly) NSString * groupID;                            //@synthesize groupID=_groupID - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)sourceForInteraction:(id)arg1 bundleID:(id)arg2 ;
+(id)intentsSourceID;
+(id)spotlightSourceID;
+(id)defaultSourceID;
+(id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setUserID:(NSNumber *)arg1 ;
-(NSString *)deviceID;
-(NSNumber *)userID;
-(NSString *)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6 ;
-(NSString *)description;
-(NSString *)itemID;
-(NSString *)syncDeviceID;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceID;
-(BOOL)isEqual:(id)arg1 ;
@end

