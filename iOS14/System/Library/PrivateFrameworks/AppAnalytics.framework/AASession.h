/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@class NSString, NSDate, NSDictionary;

@interface AASession : NSObject {

	 identifier;
	 kind;
	 name;
	 sessionData;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long kind; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSDate * startDate; 
@property (readonly,nonatomic) NSDictionary * sessionData; 
-(id)init;
-(NSDate *)startDate;
-(long long)kind;
-(NSString *)name;
-(NSDictionary *)sessionData;
-(NSString *)identifier;
@end

