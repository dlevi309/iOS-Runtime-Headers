/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCCKProtocolTranslator : NSObject
+(id)sharedInstance;
-(int)fieldValueTypeFromObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)pReferenceFromReference:(id)arg1 error:(id*)arg2 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)recordFromPRecord:(id)arg1 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg1 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg1 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)referenceFromPReference:(id)arg1 error:(id*)arg2 ;
@end

