/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TSUExtendedAttribute : NSObject <NSCopying> {

	NSString* _name;
	NSData* _value;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * value;               //@synthesize value=_value - In the implementation block
+(id)extendedAttributeWithName:(id)arg1 value:(id)arg2 ;
+(id)extendedAttributeFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(id)initFromPath:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)initFromPathFileSystemRepresentation:(const char*)arg1 name:(id)arg2 forRemoval:(BOOL)arg3 options:(int)arg4 error:(id*)arg5 ;
-(BOOL)setAttributeToPathFileSystemRepresentation:(const char*)arg1 options:(int)arg2 error:(id*)arg3 ;
-(BOOL)shouldPreserveForIntent:(unsigned)arg1 ;
-(BOOL)setAttributeToPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
@end

