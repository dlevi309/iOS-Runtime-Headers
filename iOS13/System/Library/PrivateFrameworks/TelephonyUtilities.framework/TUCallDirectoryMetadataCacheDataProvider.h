/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(CXCallDirectoryManager *)callDirectoryManager;
-(id)countryDialingCode;
-(id)firstIdentificationEntriesForEnabledExtensions;
-(int)identificationEntriesChangedNotifyToken;
-(void)setCountryDialingCode:(id)arg1 ;
-(void)setFirstIdentificationEntriesForEnabledExtensions:(id)arg1 ;
@end

