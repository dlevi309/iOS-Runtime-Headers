/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCharacterSet, NSString;

@interface TICharacterSetDescription : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSCharacterSet* _characterSet;
	BOOL _inverted;
	long long _baseIdentifier;
	NSString* _charactersAddedToBase;
	NSString* _charactersRemovedFromBase;

}

@property (nonatomic,readonly) long long baseIdentifier;                      //@synthesize baseIdentifier=_baseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * charactersAddedToBase;                  //@synthesize charactersAddedToBase=_charactersAddedToBase - In the implementation block
@property (nonatomic,copy) NSString * charactersRemovedFromBase;              //@synthesize charactersRemovedFromBase=_charactersRemovedFromBase - In the implementation block
@property (nonatomic,readonly) BOOL inverted;                                 //@synthesize inverted=_inverted - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * characterSet; 
+(BOOL)supportsSecureCoding;
-(BOOL)inverted;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)charactersAddedToBase;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 removedCharacters:(id)arg3 inverted:(BOOL)arg4 ;
-(NSCharacterSet *)characterSet;
-(id)description;
-(void)clearCachedCharacterSet;
-(id)initWithBaseCharacterSet:(long long)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)newCharacterSetFromDescription;
-(id)invertedSetDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCharactersAddedToBase:(NSString *)arg1 ;
-(long long)baseIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharactersRemovedFromBase:(NSString *)arg1 ;
-(NSString *)charactersRemovedFromBase;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCharactersInString:(id)arg1 ;
@end

