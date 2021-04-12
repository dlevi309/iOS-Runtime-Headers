/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefMessage.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessageInternal : NSObject <NSSecureCoding, NFNdefMessage> {

	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSArray * records; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)dataFromNDEFMessage:(id)arg1 ;
+(id)decodeFromNDEFMessage:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)init;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decode;
-(NSString *)description;
-(id)asData;
-(id)initWithCoder:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(id)initWithNDEFMessage:(id)arg1 ;
-(void)addRecordArray:(id)arg1 ;
@end

