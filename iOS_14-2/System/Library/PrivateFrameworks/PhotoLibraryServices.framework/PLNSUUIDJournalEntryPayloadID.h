/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)description;
-(id)initWithUUIDString:(id)arg1 ;
-(id)payloadIDString;
-(unsigned long long)hash;
-(id)payloadUUIDData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

