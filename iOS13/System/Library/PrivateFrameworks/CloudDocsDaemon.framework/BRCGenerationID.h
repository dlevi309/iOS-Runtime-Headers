/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned _generationID;
	NSData* _signature;

}

@property (nonatomic,readonly) NSNumber * fsGenerationID; 
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * generationIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const char*)UTF8String;
-(NSData *)signature;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(NSNumber *)fsGenerationID;
-(id)initWithRelativePath:(id)arg1 ;
-(id)initWithFSGenerationID:(unsigned)arg1 ;
-(BOOL)isEqualToFSGenerationID:(unsigned)arg1 ;
-(BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2 ;
-(NSString *)generationIDString;
-(id)initWithSignature:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

