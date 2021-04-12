/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject {

	PFTimeZoneLookup* _timeZoneLookup;

}

@property (nonatomic,readonly) PFTimeZoneLookup * timeZoneLookup;              //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
+(void)initialize;
+(id)_gmtTranslationDictionary;
-(id)generateInferredTimeZoneOffsetForAsset:(id)arg1 ;
-(PFTimeZoneLookup *)timeZoneLookup;
-(id)initWithTimeZoneLookup:(id)arg1 ;
@end

