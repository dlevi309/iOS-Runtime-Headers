/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <libobjc.A.dylib/AKAppleIDServerUIFieldExtractor.h>

@class RUIObjectModel, NSString;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor> {

	RUIObjectModel* _objectModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObjectModel:(id)arg1 ;
-(id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2 ;
-(id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2 ;
-(id)valueForFieldWithID:(id)arg1 ;
@end

