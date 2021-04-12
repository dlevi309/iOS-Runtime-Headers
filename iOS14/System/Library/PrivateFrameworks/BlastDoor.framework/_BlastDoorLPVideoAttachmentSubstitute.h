/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/_BlastDoorLPVideo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _BlastDoorLPVideoAttachmentSubstitute : _BlastDoorLPVideo <NSSecureCoding> {

	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)index;
-(BOOL)_shouldEncodeData;
-(void)setIndex:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithVideo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

