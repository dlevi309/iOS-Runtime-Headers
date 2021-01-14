/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSXPCListenerEndpoint : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding> {

	void* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)_setEndpoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)_endpoint;
@end

