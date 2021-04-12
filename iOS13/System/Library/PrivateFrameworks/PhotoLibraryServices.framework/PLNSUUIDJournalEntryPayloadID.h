/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLJournalEntryPayloadID.h>

@class NSUUID, NSString;

@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {

	NSUUID* _payloadID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(id)payloadIDString;
-(id)payloadUUIDData;
@end

