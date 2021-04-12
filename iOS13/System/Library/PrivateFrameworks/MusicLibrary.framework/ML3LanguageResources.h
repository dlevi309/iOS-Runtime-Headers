/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)canonicalLanguageIdentifier;
-(NSDictionary *)sectionsInfo;
-(NSDictionary *)sortingDetails;
-(id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3 ;
@end

