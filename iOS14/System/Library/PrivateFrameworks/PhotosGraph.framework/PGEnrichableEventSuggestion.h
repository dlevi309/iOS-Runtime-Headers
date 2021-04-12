/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGSuggestion.h>

@class NSSet, NSArray, NSDate, NSString;

@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion> {

	BOOL _containsUnverifiedPersons;
	unsigned char _notificationQuality;
	unsigned short _type;
	unsigned short _subtype;
	unsigned short _notificationState;
	NSSet* _features;
	NSArray* _suggestedPersonLocalIdentifiers;
	NSArray* _keyAssets;
	NSArray* _representativeAssets;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSString* _title;
	NSString* _subtitle;

}

@property (assign,nonatomic) unsigned char notificationQuality;                             //@synthesize notificationQuality=_notificationQuality - In the implementation block
@property (assign,nonatomic) unsigned short notificationState;                              //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets;                                         //@synthesize keyAssets=_keyAssets - In the implementation block
@property (nonatomic,readonly) NSArray * representativeAssets;                              //@synthesize representativeAssets=_representativeAssets - In the implementation block
@property (nonatomic,readonly) NSSet * features;                                            //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) id recipe; 
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers;              //@synthesize suggestedPersonLocalIdentifiers=_suggestedPersonLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons;                              //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate;                                 //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * universalEndDate;                                   //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned long long relevanceDurationInDays; 
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,copy,readonly) NSArray * reasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)subtype;
-(NSDate *)universalEndDate;
-(id)recipe;
-(NSSet *)features;
-(NSDate *)universalStartDate;
-(NSString *)subtitle;
-(unsigned short)notificationState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(BOOL)containsUnverifiedPersons;
-(unsigned short)type;
-(NSArray *)representativeAssets;
-(unsigned short)state;
-(long long)version;
-(NSString *)title;
-(NSArray *)keyAssets;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(id)_whitelistedMeaningLabels;
-(unsigned char)notificationQuality;
-(void)setNotificationQuality:(unsigned char)arg1 ;
-(unsigned long long)relevanceDurationInDays;
-(id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 enrichableEvent:(id)arg3 sharingSuggestionResults:(id)arg4 manager:(id)arg5 loggingConnection:(id)arg6 ;
-(id)assetCollectionToShareForAssetCollection:(id)arg1 loggingConnection:(id)arg2 ;
@end

