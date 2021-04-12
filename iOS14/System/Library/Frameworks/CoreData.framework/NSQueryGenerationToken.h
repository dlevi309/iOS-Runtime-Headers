/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)nostoresQueryGenerationToken;
+(id)currentQueryGenerationToken;
+(id)unpinnedQueryGenerationToken;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)_isEnabled;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

