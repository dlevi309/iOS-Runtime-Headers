/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSArray, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _diagnosticLookup;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticLookup;              //@synthesize diagnosticLookup=_diagnosticLookup - In the implementation block
@property (nonatomic,readonly) NSArray * diagnostics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
-(id)init;
-(NSArray *)diagnostics;
-(id)adapterForIdentifier:(id)arg1 ;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(NSMutableDictionary *)diagnosticLookup;
-(id)diagnosticForIdentifier:(id)arg1 ;
-(void)setDiagnosticLookup:(NSMutableDictionary *)arg1 ;
@end

