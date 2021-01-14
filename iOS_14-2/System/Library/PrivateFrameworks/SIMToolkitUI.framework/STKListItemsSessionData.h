/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSArray *)listItems;
-(id)initWithText:(id)arg1 simLabel:(id)arg2 listItems:(id)arg3 ;
@end

