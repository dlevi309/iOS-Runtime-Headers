/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)generation;
-(void)setGeneration:(NSString *)arg1 ;
@end

