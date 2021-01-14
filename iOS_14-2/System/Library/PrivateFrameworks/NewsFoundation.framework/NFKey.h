/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NFKey : NSObject <NSCopying> {

	unsigned long long _address;
	NSString* _name;
	id _type;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id type;                                 //@synthesize type=_type - In the implementation block
-(id)initWithAddressOfType:(id)arg1 name:(id)arg2 ;
-(id)copyWithName:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithTypeName:(id)arg1 name:(id)arg2 ;
-(unsigned long long)address;
-(id)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

