/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupIdentifier;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
@end

