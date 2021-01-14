/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFGeneralMessageProtocol.h>
#import <libobjc.A.dylib/ACFErrorReportingProtocol.h>

@class NSMutableDictionary, NSString;

@interface ACFMessage : NSObject <ACFGeneralMessageProtocol, ACFErrorReportingProtocol> {

	NSMutableDictionary* _mutableInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)message;
+(id)messageWithInfo:(id)arg1 ;
+(id)messageWithIdentifier:(id)arg1 ;
-(id)info;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)errorCode;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(id)errorMessage;
-(id)error;
-(void)clearError;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)identifier;
-(id)mutableInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(int)senderProcessID;
-(void)setSenderProcessID:(int)arg1 ;
-(id)senderProcessName;
-(void)setSenderProcessName:(id)arg1 ;
-(id)senderPortName;
-(void)setSenderPortName:(id)arg1 ;
@end

