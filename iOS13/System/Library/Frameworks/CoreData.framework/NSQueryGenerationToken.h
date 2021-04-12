/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)currentQueryGenerationToken;
+(id)unpinnedQueryGenerationToken;
+(id)nostoresQueryGenerationToken;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEnabled;
-(id)persistentStoreCoordinator;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)_storeIdentifier;
-(id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isUnmoored;
@end

