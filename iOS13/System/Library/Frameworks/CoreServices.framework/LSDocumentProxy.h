/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {

	SCD_Struct_LS11 _sourceAuditToken;
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
@property (nonatomic,readonly) const SCD_Struct_LS11* sourceAuditToken; 
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) const SCD_Struct_LS11* managedSourceAuditToken; 
+(BOOL)supportsSecureCoding;
+(id)documentProxyForURL:(id)arg1 isContentManaged:(BOOL)arg2 sourceAuditToken:(const SCD_Struct_LS11*)arg3 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS11*)arg5 ;
+(id)documentProxyForURL:(id)arg1 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 ;
+(id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const SCD_Struct_LS11*)arg2 ;
+(id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const SCD_Struct_LS11*)arg4 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4 ;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)typeIdentifier;
-(NSURL *)URL;
-(id)uniqueIdentifier;
-(id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4 ;
-(id)_boundIconInfo;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(BOOL)arg5 sourceAuditToken:(const SCD_Struct_LS11*)arg6 ;
-(NSString *)MIMEType;
-(BOOL)isContentManaged;
-(const SCD_Struct_LS11*)sourceAuditToken;
-(BOOL)isImageOrVideo;
-(NSString *)containerOwnerApplicationIdentifier;
-(id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2 ;
-(id)applicationsAvailableForOpeningWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1 ;
-(BOOL)sourceIsManaged;
-(const SCD_Struct_LS11*)managedSourceAuditToken;
-(optional<LaunchServices::BindingEvaluator>*)_bindingEvaluatorWithAuditToken:(const SCD_Struct_LS11*)arg1 ;
@end

