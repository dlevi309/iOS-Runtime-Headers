/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding> {

	BOOL _isContinuation;
	BOOL _suffixWhenPrefixOnly;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSArray* _sortedNames;

}

@property (nonatomic,copy,readonly) NSString * namePrefix;              //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortedNames;              //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,readonly) BOOL isContinuation;                     //@synthesize isContinuation=_isContinuation - In the implementation block
@property (nonatomic,readonly) BOOL suffixWhenPrefixOnly;               //@synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_localizedNameForName:(id)arg1 ;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(BOOL)isContinuation;
-(BOOL)suffixWhenPrefixOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortedNames;
-(id)localizedSortedNames;
-(id)localizedTitleForNameInfo;
-(id)initWithNamePrefix:(id)arg1 nameSuffix:(id)arg2 sortedNames:(id)arg3 isContinuation:(BOOL)arg4 suffixWhenPrefixOnly:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

