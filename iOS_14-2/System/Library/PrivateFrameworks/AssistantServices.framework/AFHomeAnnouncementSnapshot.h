/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class AFHomeAnnouncement, NSString;

@interface AFHomeAnnouncementSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _state;
	AFHomeAnnouncement* _lastPlayedAnnouncement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) AFHomeAnnouncement * lastPlayedAnnouncement;              //@synthesize lastPlayedAnnouncement=_lastPlayedAnnouncement - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)ad_shortDescription;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)serializedBackingStore;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(AFHomeAnnouncement *)lastPlayedAnnouncement;
-(id)initWithState:(unsigned long long)arg1 lastPlayedAnnouncement:(id)arg2 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

