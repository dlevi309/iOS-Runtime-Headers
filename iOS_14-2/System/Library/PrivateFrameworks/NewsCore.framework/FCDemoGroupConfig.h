/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FCDemoGroupConfig : NSObject <NSCopying> {

	unsigned long long _demoGroupType;
	NSString* _topicID;
	NSArray* _articleIDs;

}

@property (nonatomic,readonly) unsigned long long demoGroupType;              //@synthesize demoGroupType=_demoGroupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicID;                       //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * articleIDs;                     //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagIDs; 
-(id)init;
-(NSArray *)articleIDs;
-(NSArray *)tagIDs;
-(unsigned long long)demoGroupType;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topicID;
@end

