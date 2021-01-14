/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PSICachedGroup : NSObject <NSCopying> {

	NSString* _text;
	NSString* _identifier;
	unsigned long long _category;
	unsigned long long _owningGroupId;
	unsigned long long _groupId;

}

@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (assign,nonatomic) unsigned long long groupId;                      //@synthesize groupId=_groupId - In the implementation block
-(unsigned long long)groupId;
-(unsigned long long)category;
-(id)description;
-(void)setGroupId:(unsigned long long)arg1 ;
-(NSString *)text;
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(unsigned long long)owningGroupId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

