/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)signature;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)ownerID;
-(id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3 ;
-(NSString *)authURL;
@end

