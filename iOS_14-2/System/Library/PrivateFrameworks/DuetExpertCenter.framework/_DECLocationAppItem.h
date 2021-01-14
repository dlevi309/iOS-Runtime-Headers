/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECAppItem.h>

@class NSString, NSURL;

@interface _DECLocationAppItem : _DECAppItem {

	BOOL _directionsSupported;
	NSString* _name;
	NSString* _shortName;
	NSURL* _launchURL;
	NSString* _originatingBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                                //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                   //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingBundleIdentifier;              //@synthesize originatingBundleIdentifier=_originatingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL directionsSupported;                                 //@synthesize directionsSupported=_directionsSupported - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(BOOL)arg6 predictionSources:(long long)arg7 ;
+(id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(BOOL)arg6 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortName;
-(NSString *)name;
-(id)description;
-(NSURL *)launchURL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(BOOL)arg6 predictionSources:(long long)arg7 ;
-(BOOL)_isEqualToDECLocationAppItem:(id)arg1 ;
-(NSString *)originatingBundleIdentifier;
-(BOOL)directionsSupported;
@end

