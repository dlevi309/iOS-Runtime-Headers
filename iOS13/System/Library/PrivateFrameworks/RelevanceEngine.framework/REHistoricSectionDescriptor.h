/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHistoricSectionDescriptorProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSOrderedSet, RESectionDescriptor, NSArray;

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying> {

	NSOrderedSet* _rules;
	BOOL _invertsRanking;
	long long _maxElementCount;
	RESectionDescriptor* _parentDescriptor;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (assign,nonatomic,__weak) RESectionDescriptor * parentDescriptor;              //@synthesize parentDescriptor=_parentDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) BOOL invertsRanking;                                        //@synthesize invertsRanking=_invertsRanking - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                  //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)rules;
-(void)setRules:(NSSet *)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(NSArray *)orderedRules;
-(BOOL)invertsRanking;
-(void)setInvertsRanking:(BOOL)arg1 ;
-(RESectionDescriptor *)parentDescriptor;
-(void)setParentDescriptor:(RESectionDescriptor *)arg1 ;
-(void)setOrderedRules:(NSArray *)arg1 ;
@end

