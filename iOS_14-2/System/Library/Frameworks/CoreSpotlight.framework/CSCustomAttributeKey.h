/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding> {

	BOOL _searchable;
	BOOL _searchableByDefault;
	BOOL _unique;
	BOOL _multiValued;
	NSString* _keyName;

}

@property (retain) NSString * keyName;                                          //@synthesize keyName=_keyName - In the implementation block
@property (getter=isUnique) BOOL unique;                                        //@synthesize unique=_unique - In the implementation block
@property (getter=isSearchable) BOOL searchable;                                //@synthesize searchable=_searchable - In the implementation block
@property (getter=isSearchableByDefault) BOOL searchableByDefault;              //@synthesize searchableByDefault=_searchableByDefault - In the implementation block
@property (getter=isMultiValued) BOOL multiValued;                              //@synthesize multiValued=_multiValued - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_keyNameIsValid:(id)arg1 ;
-(id)init;
-(id)initWithKeyName:(id)arg1 ;
-(void)setSearchable:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSearchableByDefault:(BOOL)arg1 ;
-(NSString *)keyName;
-(id)description;
-(BOOL)isMultiValued;
-(id)initWithKeyName:(id)arg1 searchable:(BOOL)arg2 searchableByDefault:(BOOL)arg3 unique:(BOOL)arg4 multiValued:(BOOL)arg5 ;
-(BOOL)isUnique;
-(BOOL)isSearchableByDefault;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMultiValued:(BOOL)arg1 ;
-(void)setUnique:(BOOL)arg1 ;
-(BOOL)isSearchable;
-(void)setKeyName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

