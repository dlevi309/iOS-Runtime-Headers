/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)placeholder;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(NSData *)validationToken;
@end

