/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECryptor : NSObject <DEWriter> {

	unsigned _operation;
	NSObject*<DEWriter> _writer;
	CCCryptorRef _cryptor;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) CCCryptorRef cryptor;                    //@synthesize cryptor=_cryptor - In the implementation block
@property (assign,nonatomic) unsigned operation;                      //@synthesize operation=_operation - In the implementation block
-(void)setOperation:(unsigned)arg1 ;
-(NSObject*<DEWriter>)writer;
-(id)init;
-(unsigned)operation;
-(void)setCryptor:(CCCryptorRef)arg1 ;
-(void)close;
-(id)initWithWriter:(id)arg1 operation:(unsigned)arg2 key:(id)arg3 iv:(id)arg4 ;
-(void)writeData:(id)arg1 ;
-(CCCryptorRef)cryptor;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(void)dealloc;
@end

