/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)visibility;
-(unsigned long long)videoQuality;
-(unsigned long long)participantIdentifier;
-(NSNumber *)prominence;
-(id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 ;
@end

