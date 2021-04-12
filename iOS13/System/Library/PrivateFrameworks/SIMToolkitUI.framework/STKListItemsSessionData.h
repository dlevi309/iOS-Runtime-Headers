/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextSessionData.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSArray, NSString;

@interface STKListItemsSessionData : STKTextSessionData <BSXPCCoding> {

	NSArray* _listItems;

}

@property (nonatomic,readonly) NSArray * listItems;                 //@synthesize listItems=_listItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)listItems;
-(id)initWithText:(id)arg1 listItems:(id)arg2 ;
@end

