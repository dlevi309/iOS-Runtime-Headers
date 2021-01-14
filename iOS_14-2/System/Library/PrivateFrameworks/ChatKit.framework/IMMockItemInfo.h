/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IMMockItemInfo : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL outgoing;               //@synthesize outgoing=_outgoing - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultMockInfoArray;
+(id)encodedMockItemInfoArray:(id)arg1 ;
+(id)decodedMockItemInfoArray:(id)arg1 ;
-(BOOL)outgoing;
-(id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

