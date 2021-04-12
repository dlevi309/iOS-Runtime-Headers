/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)orderingTermWithProperty:(id)arg1 ;
+(id)orderingTermWithProperty:(id)arg1 direction:(int)arg2 ;
+(id)reversedTerms:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)direction;
-(id)initWithProperty:(id)arg1 ;
-(NSString *)property;
-(NSString *)collation;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3 ;
@end

