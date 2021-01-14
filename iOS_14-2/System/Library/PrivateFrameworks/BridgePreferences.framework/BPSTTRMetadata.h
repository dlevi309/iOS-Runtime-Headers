/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@class NSString;

@interface BPSTTRMetadata : NSObject {

	NSString* _componentName;
	NSString* _componentVersion;
	long long _componentID;
	NSString* _title;
	NSString* _radarDescription;

}

@property (nonatomic,retain) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,retain) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (assign,nonatomic) long long componentID;                    //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * radarDescription;              //@synthesize radarDescription=_radarDescription - In the implementation block
-(id)queryItems;
-(id)_parameters;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithComponent:(unsigned long long)arg1 ;
-(NSString *)componentVersion;
-(void)setComponentID:(long long)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(long long)componentID;
-(NSString *)radarDescription;
-(void)setRadarDescription:(NSString *)arg1 ;
-(NSString *)componentName;
-(NSString *)title;
-(void)_setComponentValuesFromComponent:(unsigned long long)arg1 ;
-(id)initWithComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(long long)arg3 ;
@end

