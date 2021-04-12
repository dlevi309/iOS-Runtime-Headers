/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PSISearchableTerm.h>

@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm> {

	NSString* _text;
	unsigned long long _category;
	unsigned long long _owningGroupId;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 identifier:(id)arg4 ;
-(unsigned long long)category;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(NSString *)identifier;
-(unsigned long long)owningGroupId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

