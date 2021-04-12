/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject {

	PFTimeZoneLookup* _timeZoneLookup;

}

@property (nonatomic,readonly) PFTimeZoneLookup * timeZoneLookup;              //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
+(void)initialize;
+(id)_gmtTranslationDictionary;
-(id)init;
-(id)generateInferredTimeZoneOffsetForAsset:(id)arg1 ;
-(PFTimeZoneLookup *)timeZoneLookup;
@end

