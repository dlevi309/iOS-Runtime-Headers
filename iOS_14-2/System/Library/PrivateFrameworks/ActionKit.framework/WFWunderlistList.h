/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface WFWunderlistList : MTLModel <MTLJSONSerializing, NSSecureCoding> {

	long long _listId;
	NSString* _title;
	NSDate* _createdAt;
	long long _revision;

}

@property (nonatomic,readonly) long long listId;                                 //@synthesize listId=_listId - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)createdAtJSONTransformer;
-(NSDate *)createdAt;
-(long long)listId;
-(NSString *)title;
-(long long)revision;
@end

