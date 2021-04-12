/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSDate, NSDictionary, NSString;

@interface WFWunderlistReminder : MTLModel <MTLJSONSerializing> {

	long long _reminderId;
	NSDate* _date;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	long long _revision;

}

@property (nonatomic,readonly) long long reminderId;                             //@synthesize reminderId=_reminderId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                               //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)createdAtJSONTransformer;
+(id)updatedAtJSONTransformer;
+(id)dateJSONTransformer;
-(NSDate *)createdAt;
-(NSDate *)date;
-(NSDate *)updatedAt;
-(long long)revision;
-(long long)reminderId;
@end

