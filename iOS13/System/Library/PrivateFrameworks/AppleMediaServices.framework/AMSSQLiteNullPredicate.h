/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AMSSQLiteNullPredicate : AMSSQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
+(id)isNullPredicateWithProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)matchesNull;
@end

