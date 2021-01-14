/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ActionPredictionHeuristicsInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {

	NSString* destinationLocation;
	NSString* transportType;
	BOOL localOnlyAfterFirstUpdate;

}
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

