/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying> {

	NSString* _displayName;
	NSArray* _handles;
	NSString* _handleIdentifier;
	NSString* _contactIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * handles;                        //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (copy) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)sg_emailAddress;
-(id)sg_serialized;
-(id)sg_namedEmailAddress;
-(id)sg_initWithNamedEmailAddress:(id)arg1 ;
-(id)sg_initWithSerializedForm:(id)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)contactIdentifier;
-(NSArray *)handles;
-(void)encodeWithCoder:(id)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)handleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setHandleIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

