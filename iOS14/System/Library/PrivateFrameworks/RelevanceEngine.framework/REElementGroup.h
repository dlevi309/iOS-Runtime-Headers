/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSString* _groupIdentifier;
	unsigned long long _behavior;
	long long _maxElementCount;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                 //@synthesize maxElementCount=_maxElementCount - In the implementation block
+(id)topElementGroupWithIdentifier:(id)arg1 ;
+(id)adjoiningElementGroupWithIdentifier:(id)arg1 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(NSString *)groupIdentifier;
-(unsigned long long)behavior;
-(id)description;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
@end

