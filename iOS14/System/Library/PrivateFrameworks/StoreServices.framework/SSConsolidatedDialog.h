/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSConsolidatedDialog : NSObject <SSXPCCoding, NSCopying> {

	NSString* _cancelLabel;
	NSString* _reason;
	NSString* _title;

}

@property (copy) NSString * cancelLabel;                            //@synthesize cancelLabel=_cancelLabel - In the implementation block
@property (copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)cancelLabel;
-(void)setCancelLabel:(NSString *)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

