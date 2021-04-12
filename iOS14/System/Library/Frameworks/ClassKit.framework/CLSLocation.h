/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSContactsSearchable.h>

@class NSString, NSPersonNameComponents;

@interface CLSLocation : CLSObject <CLSContactsSearchable> {

	BOOL _isEditable;
	NSString* _locationName;
	NSString* _searchText;
	long long _sourceType;

}

@property (nonatomic,copy) NSString * locationName;                                  //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                    //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) long long sourceType;                                   //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) BOOL isEditable;                                                  //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(long long)sourceType;
-(void)setLocationName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(NSString *)searchText;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)_init;
-(NSString *)locationName;
-(NSString *)displayName;
@end

