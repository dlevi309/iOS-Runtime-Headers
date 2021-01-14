/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEHmac : NSObject <DEWriter> {

	NSData* _hmac;
	SCD_Struct_DE2 _context;

}

@property (assign,nonatomic) SCD_Struct_DE2 context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * hmac;                       //@synthesize hmac=_hmac - In the implementation block
+(BOOL)verify:(id)arg1 computed:(id)arg2 ;
-(NSData *)hmac;
-(void)close;
-(SCD_Struct_DE2)context;
-(void)writeData:(id)arg1 ;
-(void)setHmac:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
-(void)setContext:(SCD_Struct_DE2)arg1 ;
@end

