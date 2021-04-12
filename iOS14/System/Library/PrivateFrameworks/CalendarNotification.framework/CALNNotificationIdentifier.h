/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1 ;
+(id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+(id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)stringRepresentation;
-(NSString *)sourceClientIdentifier;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)description;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3 ;
-(unsigned long long)hash;
-(BOOL)isEqualToNotificationIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

