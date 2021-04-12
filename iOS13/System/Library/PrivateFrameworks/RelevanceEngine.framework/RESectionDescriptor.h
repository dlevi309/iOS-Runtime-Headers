/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, NSString, REHistoricSectionDescriptor, NSArray, NSSet;

@interface RESectionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSOrderedSet* _rules;
	NSString* _name;
	REHistoricSectionDescriptor* _historicSectionDescriptor;
	long long _maxElementCount;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REHistoricSectionDescriptor * historicSectionDescriptor;              //@synthesize historicSectionDescriptor=_historicSectionDescriptor - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                            //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
+(id)defaultSectionDescriptorForIdentifier:(id)arg1 ;
+(id)defaultUpNextSectionDescriptorForIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)rules;
-(void)setRules:(NSSet *)arg1 ;
-(REHistoricSectionDescriptor *)historicSectionDescriptor;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(NSArray *)orderedRules;
-(void)setOrderedRules:(NSArray *)arg1 ;
-(void)setHistoricSectionDescriptor:(REHistoricSectionDescriptor *)arg1 ;
@end

