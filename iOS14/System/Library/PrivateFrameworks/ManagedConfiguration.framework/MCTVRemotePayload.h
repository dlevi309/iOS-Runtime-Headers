/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCTVRemotePayload : MCPayload {

	NSArray* _allowedTVs;
	NSArray* _allowedRemotes;

}

@property (nonatomic,retain) NSArray * allowedTVs;                  //@synthesize allowedTVs=_allowedTVs - In the implementation block
@property (nonatomic,retain) NSArray * allowedRemotes;              //@synthesize allowedRemotes=_allowedRemotes - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAllowedRemotes:(NSArray *)arg1 ;
-(void)setAllowedTVs:(NSArray *)arg1 ;
-(NSArray *)allowedRemotes;
-(NSArray *)allowedTVs;
-(id)verboseDescription;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

