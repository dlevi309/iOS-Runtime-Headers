/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _originIdentifier;
	NSString* _category;

}

@property (nonatomic,retain) NSNumber * originIdentifier;                            //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,retain) NSString * category;                                    //@synthesize category=_category - In the implementation block
@property (getter=isPairedDevice,nonatomic,readonly) BOOL pairedDevice; 
+(BOOL)supportsSecureCoding;
+(id)volumeControlTargetWithCategory:(id)arg1 ;
+(id)volumeControlTargetWithOriginIdentifier:(id)arg1 ;
+(BOOL)_isValidOriginIdentifier:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSNumber *)originIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setOriginIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isPairedDevice;
-(id)initWithOriginIdentifier:(id)arg1 category:(id)arg2 ;
@end

