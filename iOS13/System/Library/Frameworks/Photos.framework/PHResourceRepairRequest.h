/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHResourceAvailabilityRequest.h>

@class NSSet;

@interface PHResourceRepairRequest : PHResourceAvailabilityRequest {

	NSSet* _errorCodesToRepair;

}

@property (nonatomic,retain) NSSet * errorCodesToRepair;              //@synthesize errorCodesToRepair=_errorCodesToRepair - In the implementation block
+(BOOL)appyCorrectionsToResource:(id)arg1 assetObjectID:(id)arg2 errorCodes:(id)arg3 context:(id)arg4 ;
-(void)runDaemonSide;
-(void)_handleRepairFinishedNotification:(id)arg1 ;
-(id)_errorCodesFromErrors:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(id)initWithTaskIdentifier:(id)arg1 resource:(id)arg2 assetObjectID:(id)arg3 validationErrors:(id)arg4 ;
-(id)initWithTaskIdentifier:(id)arg1 dataStoreKey:(id)arg2 store:(id)arg3 assetObjectID:(id)arg4 context:(id)arg5 validationErrors:(id)arg6 ;
-(NSSet *)errorCodesToRepair;
-(void)setErrorCodesToRepair:(NSSet *)arg1 ;
@end

