/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFreeze;
	BOOL _isRemoved;
	BOOL _isAdded;

}

@property (nonatomic,readonly) BOOL isFreeze;                            //@synthesize isFreeze=_isFreeze - In the implementation block
@property (nonatomic,readonly) BOOL isRemoved;                           //@synthesize isRemoved=_isRemoved - In the implementation block
@property (nonatomic,readonly) BOOL isAdded;                             //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)freezeInfoWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(BOOL)isRemoved;
-(BOOL)isAdded;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFreeze;
@end

