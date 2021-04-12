/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSNumber *)originIdentifier;
-(void)setOriginIdentifier:(NSNumber *)arg1 ;
-(BOOL)isPairedDevice;
-(id)initWithOriginIdentifier:(id)arg1 category:(id)arg2 ;
@end

