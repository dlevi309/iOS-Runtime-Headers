/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKListItem : NSObject <BSXPCCoding> {

	NSString* _text;
	BOOL _selected;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                     //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithText:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)isSelected;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)text;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

