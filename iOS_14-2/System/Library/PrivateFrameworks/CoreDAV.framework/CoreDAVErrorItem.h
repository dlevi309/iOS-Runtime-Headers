/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _numberOfMatchesWithinLimits;
	CoreDAVItemWithNoChildren* _validSyncToken;
	CoreDAVItemWithNoChildren* _noUIDConflict;
	CoreDAVItemWithNoChildren* _validAddressData;
	CoreDAVItemWithNoChildren* _maxResourceSize;
	CoreDAVItemWithNoChildren* _uid;
	CoreDAVItemWithNoChildren* _ctagOkay;
	CoreDAVItemWithNoChildren* _maxImageSize;
	CoreDAVItemWithNoChildren* _invalidImageType;
	CoreDAVItemWithNoChildren* _imageError;
	CoreDAVItemWithNoChildren* _guardianRestricted;
	CoreDAVItemWithNoChildren* _maxAttendees;
	CoreDAVItemWithNoChildren* _quotaExceeded;
	CoreDAVItemWithNoChildren* _maxResources;
	CoreDAVItemWithNoChildren* _validTimezone;
	CoreDAVItemWithNoChildren* _validSplit;
	CoreDAVLeafItem* _status;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * numberOfMatchesWithinLimits;              //@synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validSyncToken;                           //@synthesize validSyncToken=_validSyncToken - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * noUIDConflict;                            //@synthesize noUIDConflict=_noUIDConflict - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validAddressData;                         //@synthesize validAddressData=_validAddressData - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxResourceSize;                          //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * ctagOkay;                                 //@synthesize ctagOkay=_ctagOkay - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxImageSize;                             //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * invalidImageType;                         //@synthesize invalidImageType=_invalidImageType - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * imageError;                               //@synthesize imageError=_imageError - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxAttendees;                             //@synthesize maxAttendees=_maxAttendees - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * quotaExceeded;                            //@synthesize quotaExceeded=_quotaExceeded - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxResources;                             //@synthesize maxResources=_maxResources - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validTimezone;                            //@synthesize validTimezone=_validTimezone - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validSplit;                               //@synthesize validSplit=_validSplit - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * guardianRestricted;                       //@synthesize guardianRestricted=_guardianRestricted - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                                             //@synthesize status=_status - In the implementation block
+(id)copyParseRules;
-(void)setUid:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)uid;
-(id)init;
-(void)setGuardianRestricted:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)description;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)status;
-(CoreDAVItemWithNoChildren *)maxAttendees;
-(void)setMaxAttendees:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)maxImageSize;
-(CoreDAVItemWithNoChildren *)maxResourceSize;
-(void)setMaxImageSize:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setMaxResourceSize:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)numberOfMatchesWithinLimits;
-(CoreDAVItemWithNoChildren *)validSyncToken;
-(CoreDAVItemWithNoChildren *)noUIDConflict;
-(CoreDAVItemWithNoChildren *)validAddressData;
-(CoreDAVItemWithNoChildren *)ctagOkay;
-(CoreDAVItemWithNoChildren *)invalidImageType;
-(CoreDAVItemWithNoChildren *)imageError;
-(CoreDAVItemWithNoChildren *)quotaExceeded;
-(CoreDAVItemWithNoChildren *)maxResources;
-(CoreDAVItemWithNoChildren *)guardianRestricted;
-(void)setNumberOfMatchesWithinLimits:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidSyncToken:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setNoUIDConflict:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidAddressData:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCtagOkay:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInvalidImageType:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setImageError:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setQuotaExceeded:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setMaxResources:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidTimezone:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidSplit:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)validTimezone;
-(CoreDAVItemWithNoChildren *)validSplit;
@end

