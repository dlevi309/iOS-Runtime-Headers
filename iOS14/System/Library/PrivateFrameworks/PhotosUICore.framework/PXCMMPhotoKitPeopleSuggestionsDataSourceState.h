/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _people;
	NSDictionary* _personSuggestionsByPerson;

}

@property (nonatomic,readonly) PHFetchResult * people;                                //@synthesize people=_people - In the implementation block
@property (nonatomic,readonly) NSDictionary * personSuggestionsByPerson;              //@synthesize personSuggestionsByPerson=_personSuggestionsByPerson - In the implementation block
-(PHFetchResult *)people;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)initWithPeople:(id)arg1 personSuggestionsByPerson:(id)arg2 ;
-(NSDictionary *)personSuggestionsByPerson;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

