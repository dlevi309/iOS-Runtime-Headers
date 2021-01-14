/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REComparable.h>

@class NSString;

@interface _REHistogramRange : NSObject <NSCopying, REComparable> {

	unsigned long long _min;
	unsigned long long _max;
	unsigned long long _mid;

}

@property (nonatomic,readonly) unsigned long long min;              //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) unsigned long long max;              //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) unsigned long long mid;              //@synthesize mid=_mid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)compare:(id)arg1 ;
-(unsigned long long)mid;
-(unsigned long long)min;
-(NSString *)description;
-(unsigned long long)max;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2 ;
@end

