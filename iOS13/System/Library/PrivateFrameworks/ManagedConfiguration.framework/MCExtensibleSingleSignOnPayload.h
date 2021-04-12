/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary, NSArray;

@interface MCExtensibleSingleSignOnPayload : MCPayload {

	NSString* _esso_type;
	NSString* _esso_realm;
	NSString* _esso_extensionIdentifier;
	NSString* _esso_teamIdentifier;
	NSDictionary* _esso_extensionData;
	NSArray* _esso_URLs;
	NSArray* _esso_hosts;

}

@property (nonatomic,retain) NSString * esso_type;                             //@synthesize esso_type=_esso_type - In the implementation block
@property (nonatomic,retain) NSString * esso_realm;                            //@synthesize esso_realm=_esso_realm - In the implementation block
@property (nonatomic,retain) NSString * esso_extensionIdentifier;              //@synthesize esso_extensionIdentifier=_esso_extensionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * esso_teamIdentifier;                   //@synthesize esso_teamIdentifier=_esso_teamIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * esso_extensionData;                //@synthesize esso_extensionData=_esso_extensionData - In the implementation block
@property (nonatomic,retain) NSArray * esso_URLs;                              //@synthesize esso_URLs=_esso_URLs - In the implementation block
@property (nonatomic,retain) NSArray * esso_hosts;                             //@synthesize esso_hosts=_esso_hosts - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(BOOL)_validateHost:(id)arg1 outError:(id*)arg2 ;
-(NSString *)esso_extensionIdentifier;
-(id)_validateURLString:(id)arg1 outError:(id*)arg2 ;
-(NSString *)esso_type;
-(NSString *)esso_realm;
-(NSString *)esso_teamIdentifier;
-(NSDictionary *)esso_extensionData;
-(NSArray *)esso_URLs;
-(NSArray *)esso_hosts;
-(void)setEsso_type:(NSString *)arg1 ;
-(void)setEsso_realm:(NSString *)arg1 ;
-(void)setEsso_extensionIdentifier:(NSString *)arg1 ;
-(void)setEsso_teamIdentifier:(NSString *)arg1 ;
-(void)setEsso_extensionData:(NSDictionary *)arg1 ;
-(void)setEsso_URLs:(NSArray *)arg1 ;
-(void)setEsso_hosts:(NSArray *)arg1 ;
@end

