/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FPActionOperationInfo : NSObject <NSSecureCoding> {

	BOOL _attachSandboxExtensionsOnXPCEncoding;
	BOOL __t_clientDrivenReader;
	unsigned _qos;
	NSString* _operationID;
	NSArray* _roots;
	unsigned long long __t_moveQueueWidth;

}

@property (nonatomic,copy) NSString * operationID;                                   //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSArray * roots;                                        //@synthesize roots=_roots - In the implementation block
@property (assign,nonatomic) BOOL attachSandboxExtensionsOnXPCEncoding;              //@synthesize attachSandboxExtensionsOnXPCEncoding=_attachSandboxExtensionsOnXPCEncoding - In the implementation block
@property (assign,nonatomic) unsigned qos;                                           //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) unsigned long long _t_moveQueueWidth;                   //@synthesize _t_moveQueueWidth=__t_moveQueueWidth - In the implementation block
@property (assign,nonatomic) BOOL _t_clientDrivenReader;                             //@synthesize _t_clientDrivenReader=__t_clientDrivenReader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)qos;
-(void)setQos:(unsigned)arg1 ;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(NSArray *)roots;
-(id)initWithOperationID:(id)arg1 roots:(id)arg2 ;
-(void)setAttachSandboxExtensionsOnXPCEncoding:(BOOL)arg1 ;
-(void)setRoots:(NSArray *)arg1 ;
-(BOOL)attachSandboxExtensionsOnXPCEncoding;
-(unsigned long long)_t_moveQueueWidth;
-(void)set_t_moveQueueWidth:(unsigned long long)arg1 ;
-(BOOL)_t_clientDrivenReader;
-(void)set_t_clientDrivenReader:(BOOL)arg1 ;
@end

