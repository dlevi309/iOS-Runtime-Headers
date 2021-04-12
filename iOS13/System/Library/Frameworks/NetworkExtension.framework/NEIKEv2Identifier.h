/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NSCopying> {

	NSData* _identifierData;

}

@property (readonly) unsigned long long identifierType; 
@property (retain) NSData * identifierData;                          //@synthesize identifierData=_identifierData - In the implementation block
@property (readonly) NSString * stringValue; 
+(id)copyTypeDescription;
+(id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 zone:(NSZone*)arg3 ;
+(id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)identifierType;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSData *)identifierData;
-(void)setIdentifierData:(NSData *)arg1 ;
@end

