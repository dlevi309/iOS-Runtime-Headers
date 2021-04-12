/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding> {

	int _direction;
	NSString* _property;
	NSString* _collation;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) int direction;                     //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * collation;              //@synthesize collation=_collation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)orderingTermWithProperty:(id)arg1 direction:(int)arg2 ;
+(id)orderingTermWithProperty:(id)arg1 ;
+(id)reversedTerms:(id)arg1 ;
-(int)direction;
-(NSString *)collation;
-(NSString *)property;
-(id)initWithProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

