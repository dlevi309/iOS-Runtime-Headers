/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)url;
-(CNContact *)contact;
-(void)performAction;
-(void)performDefaultAction;
-(id)actionPickerItems;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(NSString *)icsString;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(DDScannerResult *)scannerResult;
-(void)_performActionAndShowActionPickerIfNeeded:(BOOL)arg1 ;
-(id)_actionStringsArray;
@end

