/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecord, NSData;

@interface MSPCloudContainerCachedRecord : NSObject <NSSecureCoding> {

	CKRecord* _record;
	NSData* _contentsHash;
	NSData* _positionHash;

}

@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSData * contentsHash;              //@synthesize contentsHash=_contentsHash - In the implementation block
@property (nonatomic,retain) NSData * positionHash;              //@synthesize positionHash=_positionHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToCloudRecord:(id)arg1 ;
-(void)setPositionHash:(NSData *)arg1 ;
-(void)setContentsHash:(NSData *)arg1 ;
-(NSData *)contentsHash;
-(NSData *)positionHash;
@end

