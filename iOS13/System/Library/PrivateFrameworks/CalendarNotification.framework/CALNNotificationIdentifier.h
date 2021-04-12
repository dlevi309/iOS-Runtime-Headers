/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying> {

	NSString* _sourceIdentifier;
	NSString* _sourceClientIdentifier;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;              //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+(id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1 ;
+(id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringRepresentation;
-(NSString *)sourceIdentifier;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)sourceClientIdentifier;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3 ;
-(BOOL)isEqualToNotificationIdentifier:(id)arg1 ;
@end

