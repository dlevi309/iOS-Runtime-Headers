/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)type;
-(unsigned long long)address;
-(id)initWithAddressOfType:(id)arg1 name:(id)arg2 ;
-(id)initWithTypeName:(id)arg1 name:(id)arg2 ;
-(id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3 ;
-(id)copyWithName:(id)arg1 ;
@end

