/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                   //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) long long entitlement;                        //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (getter=isForWatch,nonatomic,readonly) BOOL forWatch;              //@synthesize forWatch=_forWatch - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(long long)state;
-(NSString *)groupIdentifier;
-(long long)entitlement;
-(BOOL)isForWatch;
@end

