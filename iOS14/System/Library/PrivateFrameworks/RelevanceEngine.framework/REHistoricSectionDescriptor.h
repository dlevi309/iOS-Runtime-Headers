/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRules:(NSSet *)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(NSSet *)rules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(NSArray *)orderedRules;
-(BOOL)invertsRanking;
-(void)setInvertsRanking:(BOOL)arg1 ;
-(RESectionDescriptor *)parentDescriptor;
-(void)setParentDescriptor:(RESectionDescriptor *)arg1 ;
-(void)setOrderedRules:(NSArray *)arg1 ;
@end

