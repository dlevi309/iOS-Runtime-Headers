/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNInhibitor.h>

@protocol CNInhibitor <NSObject>
@required
-(void)start;
-(void)stop;

@end


@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor> {

	BOOL _debugIsInhibiting;

}

@property (assign,nonatomic) BOOL debugIsInhibiting;                //@synthesize debugIsInhibiting=_debugIsInhibiting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg1 ;
+(id)os_transactionInhibitorWithLabel:(id)arg1 ;
-(void)start;
-(void)setDebugIsInhibiting:(BOOL)arg1 ;
-(void)stop;
-(BOOL)debugIsInhibiting;
-(void)dealloc;
@end

