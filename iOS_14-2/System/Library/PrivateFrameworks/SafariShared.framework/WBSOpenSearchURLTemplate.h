/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _parametersByName;
	NSMutableArray* _parameters;
	NSString* _templateString;

}

@property (nonatomic,copy,readonly) NSString * templateString;              //@synthesize templateString=_templateString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)URLWithSearchTerms:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2 ;
-(id)templateBySubstitutingValues:(id)arg1 ;
-(BOOL)includesParameter:(id)arg1 ;
-(NSString *)templateString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

