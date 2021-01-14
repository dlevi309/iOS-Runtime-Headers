/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	int _identificationEntriesChangedNotifyToken;
	CXCallDirectoryManager* _callDirectoryManager;
	/*^block*/id _countryDialingCode;
	/*^block*/id _firstIdentificationEntriesForEnabledExtensions;

}

@property (nonatomic,readonly) CXCallDirectoryManager * callDirectoryManager;              //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
@property (nonatomic,readonly) int identificationEntriesChangedNotifyToken;                //@synthesize identificationEntriesChangedNotifyToken=_identificationEntriesChangedNotifyToken - In the implementation block
@property (nonatomic,copy) id countryDialingCode;                                          //@synthesize countryDialingCode=_countryDialingCode - In the implementation block
@property (nonatomic,copy) id firstIdentificationEntriesForEnabledExtensions;              //@synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions - In the implementation block
-(id)init;
-(CXCallDirectoryManager *)callDirectoryManager;
-(void)setCountryDialingCode:(id)arg1 ;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setFirstIdentificationEntriesForEnabledExtensions:(id)arg1 ;
-(id)firstIdentificationEntriesForEnabledExtensions;
-(int)identificationEntriesChangedNotifyToken;
-(id)countryDialingCode;
-(void)dealloc;
@end

