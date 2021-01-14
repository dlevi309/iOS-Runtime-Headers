/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding> {

	NSDictionary* _sectionsInfo;
	NSDictionary* _sortingDetails;
	NSString* _canonicalLanguageIdentifier;

}

@property (nonatomic,readonly) NSDictionary * sectionsInfo;                         //@synthesize sectionsInfo=_sectionsInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * sortingDetails;                       //@synthesize sortingDetails=_sortingDetails - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)sortingDetails;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3 ;
-(NSString *)canonicalLanguageIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)sectionsInfo;
@end

