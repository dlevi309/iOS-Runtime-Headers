/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {

	NSArray* _observances;
	unsigned long long _cachedHash;
	BOOL _cachedIsShareable;

}

@property (nonatomic,readonly) BOOL containsOnlyInternalObservationHelpers; 
-(id)description;
-(unsigned long long)hash;
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3 ;
-(id)_copyByAddingObservance:(id)arg1 ;
-(BOOL)containsOnlyInternalObservationHelpers;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

