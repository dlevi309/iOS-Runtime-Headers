/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, PHSuggestion;

@interface PXExistingSuggestionsDebugCollectionItem : NSObject {

	NSString* _name;
	NSString* _description;
	PHSuggestion* _suggestion;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSString * description;                 //@synthesize description=_description - In the implementation block
@property (readonly) PHSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
-(PHSuggestion *)suggestion;
-(NSString *)name;
-(NSString *)description;
-(id)initWithSuggestion:(id)arg1 ;
@end

