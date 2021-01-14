/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying> {

	NSData* _dataRepresentation;

}

@property (nonatomic,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

