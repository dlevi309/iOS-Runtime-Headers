/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventSenderDescriptor, NSString;

@interface BKSMousePointerDevice : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying> {

	BOOL _hasVirtualMouseButtons;
	BOOL _supportsDragLock;
	BKSHIDEventSenderDescriptor* _senderDescriptor;
	NSString* _productName;
	NSString* _manufacturerName;
	NSString* _preferenceKey;

}

@property (nonatomic,copy) NSString * preferenceKey;                                             //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,copy) NSString * productName;                                               //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                          //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (assign,nonatomic) BOOL hasVirtualMouseButtons;                                        //@synthesize hasVirtualMouseButtons=_hasVirtualMouseButtons - In the implementation block
@property (assign,nonatomic) BOOL supportsDragLock;                                              //@synthesize supportsDragLock=_supportsDragLock - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventSenderDescriptor * senderDescriptor;              //@synthesize senderDescriptor=_senderDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(NSString *)productName;
-(id)init;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)manufacturerName;
-(id)preferences;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreferences:(id)arg1 ;
-(NSString *)description;
-(id)initForProtobufDecoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;
-(NSString *)preferenceKey;
-(id)initWithSenderDescriptor:(id)arg1 ;
-(BOOL)supportsDragLock;
-(void)setManufacturerName:(NSString *)arg1 ;
-(BOOL)hasVirtualMouseButtons;
-(void)setHasVirtualMouseButtons:(BOOL)arg1 ;
-(void)setSupportsDragLock:(BOOL)arg1 ;
-(void)setPreferenceKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

