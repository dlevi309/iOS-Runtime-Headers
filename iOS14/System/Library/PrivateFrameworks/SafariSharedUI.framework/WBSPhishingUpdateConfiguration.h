/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface WBSPhishingUpdateConfiguration : NSObject {

	NSString* _configurationName;
	NSString* _configurationVersion;
	double _updateInterval;

}

@property (nonatomic,readonly) NSString * configurationName;                 //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,readonly) NSString * configurationVersion;              //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,readonly) double updateInterval;                        //@synthesize updateInterval=_updateInterval - In the implementation block
-(NSString *)configurationName;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(double)updateInterval;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)configurationVersion;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

