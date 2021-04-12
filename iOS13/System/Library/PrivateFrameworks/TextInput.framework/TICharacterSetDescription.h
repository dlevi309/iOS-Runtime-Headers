/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSCharacterSet *)characterSet;
-(id)initWithBaseCharacterSet:(long long)arg1 ;
-(id)initWithCharactersInString:(id)arg1 ;
-(id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 removedCharacters:(id)arg3 inverted:(BOOL)arg4 ;
-(id)invertedSetDescription;
-(id)newCharacterSetFromDescription;
-(void)clearCachedCharacterSet;
-(long long)baseIdentifier;
-(NSString *)charactersAddedToBase;
-(void)setCharactersAddedToBase:(NSString *)arg1 ;
-(NSString *)charactersRemovedFromBase;
-(void)setCharactersRemovedFromBase:(NSString *)arg1 ;
-(BOOL)inverted;
@end

