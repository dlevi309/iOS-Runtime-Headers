/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(BOOL)isEqualToCloudRecord:(id)arg1 ;
-(void)setPositionHash:(NSData *)arg1 ;
-(void)setContentsHash:(NSData *)arg1 ;
-(NSData *)contentsHash;
-(NSData *)positionHash;
@end

