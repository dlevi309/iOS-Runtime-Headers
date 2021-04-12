/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)identifier;
-(id)error;
-(void)setError:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)info;
-(id)errorMessage;
-(id)initWithInfo:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(long long)errorCode;
-(void)clearError;
-(id)mutableInfo;
-(int)senderProcessID;
-(void)setSenderProcessID:(int)arg1 ;
-(id)senderProcessName;
-(void)setSenderProcessName:(id)arg1 ;
-(id)senderPortName;
-(void)setSenderPortName:(id)arg1 ;
@end

