/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCCKProtocolTranslator : NSObject
+(id)sharedInstance;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)pReferenceFromReference:(id)arg1 error:(id*)arg2 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg1 ;
-(id)referenceFromPReference:(id)arg1 error:(id*)arg2 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)recordFromPRecord:(id)arg1 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg1 ;
-(int)fieldValueTypeFromObject:(id)arg1 ;
@end

