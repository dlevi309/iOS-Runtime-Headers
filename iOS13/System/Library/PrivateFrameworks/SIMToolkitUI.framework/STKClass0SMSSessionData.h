/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)address;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)body;
-(id)initWithBody:(id)arg1 address:(id)arg2 showsFromAddress:(BOOL)arg3 ;
-(BOOL)showsFromAddress;
@end

