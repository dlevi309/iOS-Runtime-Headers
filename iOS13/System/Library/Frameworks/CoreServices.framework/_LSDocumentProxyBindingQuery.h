/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery {

	unsigned char _style;
	LSDocumentProxy* _documentProxy;
	NSString* _handlerRank;

}

@property (nonatomic,retain,readonly) LSDocumentProxy * documentProxy;              //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) unsigned char style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * handlerRank;                         //@synthesize handlerRank=_handlerRank - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)style;
-(id)initWithDocumentProxy:(id)arg1 style:(unsigned char)arg2 handlerRank:(id)arg3 ;
-(NSString *)handlerRank;
-(LSDocumentProxy *)documentProxy;
-(void)filterOpenRestrictedBindings:(vector<LSBinding, std::__1::allocator<LSBinding> >*)arg1 connection:(id)arg2 context:(LSContext*)arg3 earlyYield:(/*^block*/id)arg4 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

