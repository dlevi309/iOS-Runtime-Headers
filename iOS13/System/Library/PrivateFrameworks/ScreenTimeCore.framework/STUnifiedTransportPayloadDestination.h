/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>

@class NSString;

@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject> {

	NSString* _address;
	NSString* _type;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)state;
-(NSString *)address;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 state:(unsigned long long)arg3 ;
@end

