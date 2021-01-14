/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	long long primaryType;
	NSCountedSet* _additionalAttachments;

}

@property (nonatomic,retain) NSCountedSet * additionalAttachments;              //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (assign,nonatomic) long long primaryType; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addAttachmentOfType:(long long)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(unsigned long long)numberOfAdditionalAttachments;
@end

