/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)outgoing;
-(id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2 ;
@end

