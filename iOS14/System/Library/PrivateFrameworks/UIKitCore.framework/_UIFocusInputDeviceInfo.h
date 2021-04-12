/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface _UIFocusInputDeviceInfo : NSObject <NSCopying, BSXPCCoding> {

	unsigned long long _senderID;

}

@property (nonatomic,readonly) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)infoWithSenderID:(unsigned long long)arg1 ;
-(unsigned long long)senderID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithSenderID:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

