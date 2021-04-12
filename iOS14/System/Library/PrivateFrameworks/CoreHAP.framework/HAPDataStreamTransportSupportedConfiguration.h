/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HAPDataStreamTransportSupportedConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _configurations;

}

@property (nonatomic,retain) NSMutableArray * configurations;              //@synthesize configurations=_configurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(void)setConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)configurations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConfigurations:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

