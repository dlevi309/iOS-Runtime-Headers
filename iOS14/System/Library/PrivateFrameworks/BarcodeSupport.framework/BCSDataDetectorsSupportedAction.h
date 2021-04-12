/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <BarcodeSupport/BCSAction.h>
#import <libobjc.A.dylib/BCSActionDelegate.h>

@class NSArray, DDScannerResult, CNContact, NSString;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {

	NSArray* _actions;
	DDScannerResult* _scannerResult;
	CNContact* _contact;
	NSString* _icsString;

}

@property (nonatomic,readonly) DDScannerResult * scannerResult;              //@synthesize scannerResult=_scannerResult - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * icsString;                    //@synthesize icsString=_icsString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)performAction;
-(id)actionPickerItems;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)url;
-(void)performDefaultAction;
-(DDScannerResult *)scannerResult;
-(NSString *)icsString;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(void)_performActionAndShowActionPickerIfNeeded:(BOOL)arg1 ;
-(id)_actionStringsArray;
@end

