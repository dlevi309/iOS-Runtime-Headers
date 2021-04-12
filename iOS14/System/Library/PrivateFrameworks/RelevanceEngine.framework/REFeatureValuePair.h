/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REFeature;

@interface REFeatureValuePair : NSObject <NSCopying> {

	REFeature* _feature;
	unsigned long long _value;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(REFeature *)feature;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 ;
@end

