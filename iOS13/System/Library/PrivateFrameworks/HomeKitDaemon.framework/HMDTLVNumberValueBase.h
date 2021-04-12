/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSNumber, NSString;

@interface HMDTLVNumberValueBase : NSObject <NSCopying, HMDTLVProtocol> {

	NSNumber* _value;

}

@property (nonatomic,retain) NSNumber * value;                      //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)_parseFromData:(const char*)arg1 length:(unsigned long long)arg2 status:(int*)arg3 ;
-(id)_serialize;
@end

