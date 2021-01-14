/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSArray, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _diagnosticLookup;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticLookup;              //@synthesize diagnosticLookup=_diagnosticLookup - In the implementation block
@property (nonatomic,readonly) NSArray * diagnostics; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)diagnostics;
-(id)adapterForIdentifier:(id)arg1 ;
-(id)init;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(NSMutableDictionary *)diagnosticLookup;
-(id)diagnosticForIdentifier:(id)arg1 ;
-(void)setDiagnosticLookup:(NSMutableDictionary *)arg1 ;
@end

