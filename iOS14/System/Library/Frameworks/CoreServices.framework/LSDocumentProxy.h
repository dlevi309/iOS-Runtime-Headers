/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {

	SCD_Struct_LS15 _sourceAuditToken;
	BOOL _isContentManaged;
	NSURL* _URL;
	NSString* _name;
	NSString* _typeIdentifier;
	NSString* _MIMEType;

}

@property (getter=isImageOrVideo,readonly) BOOL imageOrVideo; 
@property (nonatomic,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * typeIdentifier;                                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * containerOwnerApplicationIdentifier; 
@property (getter=isContentManaged,nonatomic,readonly) BOOL contentManaged;                 //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_LS15* sourceAuditToken; 
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) const SCD_Struct_LS15* managedSourceAuditToken; 
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS15*)arg5 ;
+(BOOL)supportsSecureCoding;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const SCD_Struct_LS15*)arg4 ;
+(id)documentProxyForURL:(id)arg1 isContentManaged:(BOOL)arg2 sourceAuditToken:(const SCD_Struct_LS15*)arg3 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4 ;
+(id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const SCD_Struct_LS15*)arg2 ;
+(id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 ;
+(id)documentProxyForURL:(id)arg1 ;
-(NSString *)MIMEType;
-(id)applicationsOrClaimBindings:(BOOL)arg1 availableForOpeningWithStyle:(unsigned char)arg2 handlerRank:(id)arg3 limit:(unsigned long long)arg4 XPCConnection:(id)arg5 error:(id*)arg6 ;
-(id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(BOOL)arg5 sourceAuditToken:(const SCD_Struct_LS15*)arg6 ;
-(id)_boundIconInfo;
-(id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(id)availableClaimBindingsForMode:(unsigned char)arg1 handlerRank:(id)arg2 error:(id*)arg3 ;
-(id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2 ;
-(BOOL)isContentManaged;
-(BOOL)sourceIsManaged;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(optional<LaunchServices::BindingEvaluator>*)_bindingEvaluatorWithAuditToken:(const SCD_Struct_LS15*)arg1 ;
-(NSString *)containerOwnerApplicationIdentifier;
-(id)availableClaimBindingsForMode:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)isImageOrVideo;
-(id)availableClaimBindingsReturningError:(id*)arg1 ;
-(const SCD_Struct_LS15*)sourceAuditToken;
-(const SCD_Struct_LS15*)managedSourceAuditToken;
-(NSString *)typeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)debugDescription;
-(NSString *)name;
-(id)description;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
@end

