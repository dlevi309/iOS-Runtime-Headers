/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding> {

	NSString* _deviceIdentifier;
	NSString* _generation;

}

@property (nonatomic,copy) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * generation;                    //@synthesize generation=_generation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setGeneration:(NSString *)arg1 ;
-(NSString *)generation;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

