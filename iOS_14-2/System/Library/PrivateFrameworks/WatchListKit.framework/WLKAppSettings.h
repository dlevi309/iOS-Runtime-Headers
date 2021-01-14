/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding> {

	BOOL _obsolete;
	NSString* _channelID;
	NSString* _displayName;
	unsigned long long _accessStatus;
	NSString* _externalID;

}

@property (nonatomic,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long accessStatus;              //@synthesize accessStatus=_accessStatus - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                      //@synthesize externalID=_externalID - In the implementation block
@property (assign,nonatomic) BOOL obsolete;                                //@synthesize obsolete=_obsolete - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isExternalID:(id)arg1 equalToExternalID:(id)arg2 ;
-(BOOL)obsolete;
-(void)setObsolete:(BOOL)arg1 ;
-(NSString *)externalID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)channelID;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)JSONDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)accessStatus;
-(void)setAccessStatus:(unsigned long long)arg1 ;
-(id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4 ;
-(BOOL)isEqualToAppSettings:(id)arg1 ;
-(id)_statusStrings;
@end

