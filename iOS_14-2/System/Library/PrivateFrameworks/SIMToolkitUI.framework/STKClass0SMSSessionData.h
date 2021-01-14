/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKClass0SMSSessionData : NSObject <BSXPCCoding> {

	BOOL _showsFromAddress;
	NSString* _body;
	NSString* _address;

}

@property (nonatomic,copy,readonly) NSString * body;                 //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL showsFromAddress;                //@synthesize showsFromAddress=_showsFromAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)body;
-(NSString *)address;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithBody:(id)arg1 address:(id)arg2 showsFromAddress:(BOOL)arg3 ;
-(BOOL)showsFromAddress;
@end

