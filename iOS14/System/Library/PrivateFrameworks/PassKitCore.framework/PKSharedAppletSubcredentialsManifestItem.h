/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKSharedAppletSubcredentialsManifestItem : NSObject {

	BOOL _forWatch;
	NSString* _identifier;
	NSString* _name;
	NSString* _groupIdentifier;
	long long _entitlement;
	long long _state;
	long long _rawState;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                   //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) long long entitlement;                        //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long rawState;                           //@synthesize rawState=_rawState - In the implementation block
@property (getter=isForWatch,nonatomic,readonly) BOOL forWatch;              //@synthesize forWatch=_forWatch - In the implementation block
-(NSString *)groupIdentifier;
-(long long)entitlement;
-(id)init;
-(long long)rawState;
-(BOOL)isForWatch;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(long long)state;
-(NSString *)identifier;
@end

