/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@class NSString;

@interface WFCoreDataObjectChange : NSObject {

	NSString* _URIRepresentation;
	unsigned long long _objectType;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * URIRepresentation;               //@synthesize URIRepresentation=_URIRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)URIRepresentation;
-(unsigned long long)objectType;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

