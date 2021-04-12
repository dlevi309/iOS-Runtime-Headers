/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding> {

	unsigned long long _participantIdentifier;
	unsigned long long _videoQuality;
	NSNumber* _visibility;
	NSNumber* _prominence;

}

@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoQuality;                       //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,readonly) NSNumber * visibility;                                 //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) NSNumber * prominence;                                 //@synthesize prominence=_prominence - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)visibility;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)prominence;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)videoQuality;
-(id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 ;
-(unsigned long long)participantIdentifier;
@end

