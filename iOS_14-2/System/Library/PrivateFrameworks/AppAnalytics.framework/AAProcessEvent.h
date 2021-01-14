/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@class NSString, AAJSON;

@interface AAProcessEvent : NSObject {

	 name;
	 version;
	 json;
	 groupName;

}

@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * version; 
@property (readonly,nonatomic) AAJSON * json; 
@property (readonly,nonatomic) NSString * groupName; 
-(AAJSON *)json;
-(id)init;
-(NSString *)groupName;
-(NSString *)name;
-(NSString *)version;
@end

