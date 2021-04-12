/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload {

	NSArray* _apnInfos;
	BOOL _wasInstalled;

}

@property (assign,nonatomic) BOOL wasInstalled;              //@synthesize wasInstalled=_wasInstalled - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)apnDomainName;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
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
@end

