/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, NSDictionary, PHSuggestion, NSDate;

@interface PXSuggesterDebugCollectionItem : NSObject {

	NSString* _name;
	NSString* _description;
	NSDictionary* _info;
	PHSuggestion* _suggestion;
	NSDate* _date;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSString * description;                 //@synthesize description=_description - In the implementation block
@property (readonly) NSDictionary * info;                    //@synthesize info=_info - In the implementation block
@property (readonly) PHSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (readonly) BOOL isInvalid; 
-(BOOL)isInvalid;
-(NSDictionary *)info;
-(PHSuggestion *)suggestion;
-(NSString *)name;
-(NSString *)description;
-(NSDate *)date;
-(id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
@end

