/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload {

	NSArray* _whitelistDestinations;
	NSArray* _destinationsWithPasswords;
	NSArray* _titlesAndDescriptions;

}

@property (nonatomic,retain) NSArray * titlesAndDescriptions;                  //@synthesize titlesAndDescriptions=_titlesAndDescriptions - In the implementation block
@property (nonatomic,retain) NSArray * whitelistDestinations;                  //@synthesize whitelistDestinations=_whitelistDestinations - In the implementation block
@property (nonatomic,retain) NSArray * destinationsWithPasswords;              //@synthesize destinationsWithPasswords=_destinationsWithPasswords - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setWhitelistDestinations:(NSArray *)arg1 ;
-(void)setDestinationsWithPasswords:(NSArray *)arg1 ;
-(NSArray *)whitelistDestinations;
-(NSArray *)destinationsWithPasswords;
-(NSArray *)titlesAndDescriptions;
-(void)setTitlesAndDescriptions:(NSArray *)arg1 ;
@end

