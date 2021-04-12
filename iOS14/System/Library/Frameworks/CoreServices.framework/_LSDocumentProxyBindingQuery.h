/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery {

	BOOL _yieldClaimBindings;
	unsigned char _style;
	LSDocumentProxy* _documentProxy;
	NSString* _handlerRank;

}

@property (assign,nonatomic) BOOL yieldClaimBindings;                               //@synthesize yieldClaimBindings=_yieldClaimBindings - In the implementation block
@property (nonatomic,retain,readonly) LSDocumentProxy * documentProxy;              //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) unsigned char style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * handlerRank;                         //@synthesize handlerRank=_handlerRank - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)handlerRank;
-(LSDocumentProxy *)documentProxy;
-(void)filterOpenRestrictedBindings:(vector<LSBinding, std::__1::allocator<LSBinding> >*)arg1 connection:(id)arg2 context:(LSContext*)arg3 earlyYield:(/*^block*/id)arg4 ;
-(id)initWithDocumentProxy:(id)arg1 style:(unsigned char)arg2 handlerRank:(id)arg3 ;
-(BOOL)yieldClaimBindings;
-(void)setYieldClaimBindings:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)style;
-(BOOL)isEqual:(id)arg1 ;
@end

