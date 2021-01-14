/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload {

	MCAPNConfiguration* _attachAPN;
	NSArray* _APNs;

}

@property (nonatomic,retain) MCAPNConfiguration * attachAPN;              //@synthesize attachAPN=_attachAPN - In the implementation block
@property (nonatomic,retain) NSArray * APNs;                              //@synthesize APNs=_APNs - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSArray *)APNs;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAPNs:(NSArray *)arg1 ;
-(MCAPNConfiguration *)attachAPN;
-(id)APNsLabel;
-(void)setAttachAPN:(MCAPNConfiguration *)arg1 ;
-(id)APNsDescription;
-(id)attachAPNConfigurationLabel;
-(id)APNConfigurationDescription;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

