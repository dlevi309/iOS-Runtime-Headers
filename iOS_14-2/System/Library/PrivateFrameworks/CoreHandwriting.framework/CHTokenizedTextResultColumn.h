/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _tokenRows;

}

@property (nonatomic,copy,readonly) NSArray * tokenRows;                //@synthesize tokenRows=_tokenRows - In the implementation block
@property (nonatomic,readonly) NSIndexSet * strokeIndexes; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSIndexSet *)strokeIndexes;
-(id)initWithTokenRows:(id)arg1 ;
-(NSArray *)tokenRows;
-(BOOL)isEqualToTokenizedTextResultColumn:(id)arg1 ;
-(long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(NSRange)arg2 ;
-(BOOL)containsStartingTokenEquivalentToToken:(id)arg1 ;
@end

