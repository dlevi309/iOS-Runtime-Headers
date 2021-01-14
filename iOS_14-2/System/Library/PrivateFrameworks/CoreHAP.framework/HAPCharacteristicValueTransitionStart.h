/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HAPCharacteristicValueTransitionStart : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitions;

}

@property (nonatomic,retain) NSMutableArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)transitions;
-(void)setTransitions:(NSMutableArray *)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTransitions:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

