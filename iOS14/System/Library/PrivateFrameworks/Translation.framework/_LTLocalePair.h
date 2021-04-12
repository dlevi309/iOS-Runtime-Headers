/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying> {

	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;

}

@property (nonatomic,readonly) NSLocale * sourceLocale;              //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (nonatomic,readonly) NSLocale * targetLocale;              //@synthesize targetLocale=_targetLocale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithIdentifiers:(id)arg1 ;
-(BOOL)isPassthrough;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSLocale *)sourceLocale;
-(id)cannonicalLocalePair;
-(NSLocale *)targetLocale;
-(id)oppositeToLocale:(id)arg1 ;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(id)combinedLocaleIdentifier;
-(id)reversedPair;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)cannonicalIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

