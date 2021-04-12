/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(unsigned long long)numberOfAdditionalAttachments;
-(void)addAttachmentOfType:(long long)arg1 ;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
@end

