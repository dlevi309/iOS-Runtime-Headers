/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)max;
-(unsigned long long)min;
-(id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)mid;
@end

