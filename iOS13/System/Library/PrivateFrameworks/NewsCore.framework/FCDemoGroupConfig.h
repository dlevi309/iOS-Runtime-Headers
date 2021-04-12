/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topicID;
-(NSArray *)tagIDs;
-(NSArray *)articleIDs;
-(unsigned long long)demoGroupType;
@end

