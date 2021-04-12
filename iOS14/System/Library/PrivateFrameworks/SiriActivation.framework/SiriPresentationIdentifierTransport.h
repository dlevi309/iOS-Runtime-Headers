/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _identifier;

}

@property (nonatomic,retain) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSiriPresentationIdentifier:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)siriPresentationIdentifier;
@end

