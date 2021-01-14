/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISConcreteImage.h>

@class NSUUID, NSData;

@interface ISCacheImage : ISConcreteImage {

	NSUUID* _uuid;
	NSData* _validationToken;

}

@property (retain) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL placeholder; 
@property (readonly) NSData * validationToken;              //@synthesize validationToken=_validationToken - In the implementation block
-(NSData *)validationToken;
-(NSUUID *)uuid;
-(void)setPlaceholder:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(BOOL)placeholder;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

