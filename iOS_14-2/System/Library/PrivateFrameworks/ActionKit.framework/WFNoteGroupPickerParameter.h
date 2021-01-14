/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class NSString;

@interface WFNoteGroupPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {

	NSString* _appBundleIdentifier;

}

@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
@end

