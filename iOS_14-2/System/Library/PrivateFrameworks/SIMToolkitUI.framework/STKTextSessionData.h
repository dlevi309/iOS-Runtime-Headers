/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKTextSessionData : NSObject <BSXPCCoding> {

	NSString* _text;
	NSString* _simLabel;

}

@property (nonatomic,copy,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * simLabel;              //@synthesize simLabel=_simLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)text;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)simLabel;
-(id)initWithText:(id)arg1 simLabel:(id)arg2 ;
@end

