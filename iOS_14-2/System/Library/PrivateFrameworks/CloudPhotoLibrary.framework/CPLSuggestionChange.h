/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLSuggestionAssetList, NSDate, NSData;

@interface CPLSuggestionChange : CPLRecordChange {

	unsigned short _type;
	unsigned short _subtype;
	unsigned short _notificationState;
	unsigned short _state;
	NSString* _title;
	NSString* _subtitle;
	CPLSuggestionAssetList* _assetList;
	NSDate* _creationDate;
	long long _version;
	NSDate* _activationDate;
	NSDate* _relevantUntilDate;
	NSDate* _expungeDate;
	NSData* _actionData;
	NSData* _featuresData;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short subtype;                        //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy) CPLSuggestionAssetList * assetList;              //@synthesize assetList=_assetList - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) unsigned short notificationState;              //@synthesize notificationState=_notificationState - In the implementation block
@property (assign,nonatomic) unsigned short state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDate * activationDate;                         //@synthesize activationDate=_activationDate - In the implementation block
@property (nonatomic,copy) NSDate * relevantUntilDate;                      //@synthesize relevantUntilDate=_relevantUntilDate - In the implementation block
@property (nonatomic,copy) NSDate * expungeDate;                            //@synthesize expungeDate=_expungeDate - In the implementation block
@property (nonatomic,copy) NSData * actionData;                             //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,copy) NSData * featuresData;                           //@synthesize featuresData=_featuresData - In the implementation block
+(id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2 ;
-(unsigned short)subtype;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)subtitle;
-(NSDate *)expungeDate;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(NSData *)featuresData;
-(NSDate *)activationDate;
-(unsigned short)notificationState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(void)setActivationDate:(NSDate *)arg1 ;
-(NSDate *)relevantUntilDate;
-(void)setRelevantUntilDate:(NSDate *)arg1 ;
-(void)setExpungeDate:(NSDate *)arg1 ;
-(void)setFeaturesData:(NSData *)arg1 ;
-(BOOL)supportsDeletion;
-(NSData *)actionData;
-(NSDate *)creationDate;
-(unsigned short)type;
-(void)setAssetList:(CPLSuggestionAssetList *)arg1 ;
-(void)setState:(unsigned short)arg1 ;
-(unsigned short)state;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setSubtype:(unsigned short)arg1 ;
-(long long)version;
-(void)setActionData:(NSData *)arg1 ;
-(NSString *)title;
-(CPLSuggestionAssetList *)assetList;
-(BOOL)supportsDirectDeletion;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
@end

