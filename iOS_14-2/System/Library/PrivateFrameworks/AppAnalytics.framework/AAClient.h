/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@class NSString;

@interface AAClient : NSObject {

	 identifier;
	 name;
	 version;
	 build;
	 buildNumber;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * version; 
@property (readonly,nonatomic) long long build; 
@property (readonly,nonatomic) NSString * buildNumber; 
@property (readonly,nonatomic) NSString * fullVersion; 
-(id)initWithBundle:(id)arg1 ;
-(long long)build;
-(id)init;
-(NSString *)buildNumber;
-(NSString *)name;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 build:(long long)arg4 ;
-(NSString *)fullVersion;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 ;
-(NSString *)identifier;
-(NSString *)version;
@end

