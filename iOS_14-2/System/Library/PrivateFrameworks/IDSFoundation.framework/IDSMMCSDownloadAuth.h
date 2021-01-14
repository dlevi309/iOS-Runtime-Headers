/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface IDSMMCSDownloadAuth : NSObject <NSCopying> {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSData * signature; 
@property (nonatomic,readonly) NSString * authURL; 
@property (nonatomic,readonly) NSString * ownerID; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSData *)signature;
-(id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3 ;
-(NSString *)ownerID;
-(NSString *)authURL;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

