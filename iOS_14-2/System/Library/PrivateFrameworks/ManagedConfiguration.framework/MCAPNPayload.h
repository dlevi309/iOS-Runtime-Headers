/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload {

	NSArray* _apnInfos;
	BOOL _wasInstalled;

}

@property (assign,nonatomic) BOOL wasInstalled;              //@synthesize wasInstalled=_wasInstalled - In the implementation block
+(id)apnDomainName;
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2 ;
-(BOOL)_checkForValidContents:(id)arg1 outError:(id*)arg2 ;
-(void)_finishInitializationWithContents:(id)arg1 ;
-(id)_strippedAPNDefaults;
-(id)apnDefaults;
-(BOOL)wasInstalled;
-(void)setWasInstalled:(BOOL)arg1 ;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

