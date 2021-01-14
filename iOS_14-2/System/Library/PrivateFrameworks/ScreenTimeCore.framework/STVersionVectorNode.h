/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;                                    //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)join:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)increment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

