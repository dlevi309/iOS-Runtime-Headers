/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DKDiagnosticManager.h>
#import <libobjc.A.dylib/DKAssetResponder.h>
#import <libobjc.A.dylib/DKUIResponder.h>

@protocol DKUIResponder;
@class NSMutableDictionary, NSMutableArray, NSString;

@interface DKDiagnosticXPCManager : DKDiagnosticManager <DKAssetResponder, DKUIResponder> {

	id<DKUIResponder> _uiResponder;
	NSMutableDictionary* _diagnostics;
	NSMutableArray* _activeDiagnostics;

}

@property (nonatomic,retain) NSMutableDictionary * diagnostics;                 //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeDiagnostics;                //@synthesize activeDiagnostics=_activeDiagnostics - In the implementation block
@property (assign,nonatomic,__weak) id<DKUIResponder> uiResponder;              //@synthesize uiResponder=_uiResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)diagnostics;
-(void)setDiagnostics:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)getAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUI:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 connectionRoute:(unsigned long long)arg2 ;
-(NSMutableArray *)activeDiagnostics;
-(id<DKUIResponder>)uiResponder;
-(void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticsWithCompletion:(/*^block*/id)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(void)cancelAllDiagnostics;
-(void)registerDiagnosticWithAttributes:(id)arg1 ;
-(void)setUiResponder:(id<DKUIResponder>)arg1 ;
-(void)setActiveDiagnostics:(NSMutableArray *)arg1 ;
@end

